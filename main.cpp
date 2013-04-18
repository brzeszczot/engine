#include <iostream>
#include "Engine.hpp"
#include "Library.hpp"

int main()
{
    Library* lib = new Library();
    Engine* en = new Engine(lib);

    delete lib;
    delete en;
    return 0;
}
