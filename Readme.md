This is lua binding test for c++;

we use SWIG to automaticlly bind c++ code to lua.

#Lessions:
When binding c++ to lua, just remember that abstract class cannot be instantiated. we can not get a instance from lua.
Example:
we can not get ck instance from lua. Because Duck is a abstract class.

#Compile:
C++:
g++ chicken.cpp roastduck.cpp duck.cpp main.cpp -o c_fowl

Lua:
1, swig -c++ -lua lua_fowl.i
2, g++ chicken.cpp roastduck.cpp duck.cpp lua_main.cpp lua_fowl_wrap.cxx -I <path_to_lua_include> -L <path_to_lua_lib> -llua -lm -lldl -o fowl
