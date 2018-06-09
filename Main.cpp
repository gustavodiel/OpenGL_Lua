//
// Created by Gustavo Diel on 03/06/18.
//

#include <cstdio>
#include <iostream>

#include "Main.hpp"

#include "LuaBridgeHelpers.hpp"

using namespace std;


void Main::Start() {

    LuaBridgeHelpers *luaHelper = new LuaBridgeHelpers();

    luaHelper->test();

}
