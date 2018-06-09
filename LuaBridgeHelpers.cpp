//
// Created by Gustavo Diel on 03/06/18.
//

#include "LuaBridgeHelpers.hpp"
#include <iostream>

using namespace luabridge;

void sendMessage(const std::string& msg) {
    std::cout << msg << std::endl;
}

void LuaBridgeHelpers::test() {
    lua_State* L = luaL_newstate();
    luaL_openlibs(L);

    getGlobalNamespace(L)
            .addFunction("doPrint", sendMessage);

    luaL_dofile(L, "../Scripts/Player.lua");
    lua_pcall(L, 0, 0, 0);

    luaL_dofile(L, "../Scripts/Core.lua");
    lua_pcall(L, 0, 0, 0);

    LuaRef core = getGlobal(L, "Core");

    LuaRef player = getGlobal(L, "player");

    if (player.isNil()) {
        std::cout << "PROBLEM" << std::endl;
    }

    LuaRef name = player["name"];

    std::cout << name.cast<std::string>() << std::endl;

    player["onUpdate"]();

    std::cout << player["getName"]() << std::endl;


    int num = 0;

    while (1) {
        if (core["onUpdate"](num++).cast<int>() == -1) {
            break;
        }
    }
}