//
// Created by Gustavo Diel on 03/06/18.
//

#ifndef PROJECT_MAIN_HPP
#define PROJECT_MAIN_HPP


#include <lua.h>

class Main {

public:

    void Start();


protected:

    lua_State*  L;

};


#endif //PROJECT_MAIN_HPP
