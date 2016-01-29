#include <iostream>
#include <stdio.h>
#include "lua.hpp"
#include "lualib.h"
#include "lauxlib.h"

extern "C"
{
    int luaopen_fowl(lua_State * L);
}

#define LUA_EXTERLIBS {"fowl", luaopen_fowl},

int main(int argc, char* argv[])
{
    lua_State *L;
    if (argc < 2)
    {
        printf("%s: <filename.lua>\n", argv[0]);
        return 0;
    }

    L = luaL_newstate();
    luaopen_base(L);
    luaL_openlibs(L);
    luaopen_fowl(L);
    if (luaL_loadfile(L,argv[1]) == 0)
        lua_pcall(L,0,0,0);
    else
        printf("unable to load %s\n", argv[1]);
    return 0;
}

