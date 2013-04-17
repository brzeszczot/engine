#include "object2.hpp"

object2::object2()
{
}

object2::~object2()
{

}

void object2::update()
{
    object::update();
    object2::draw();
}

void object2::draw()
{
    std::cout << "object2: " << int_object << std::endl;
}

