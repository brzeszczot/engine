#include "object.hpp"

object::object()
{
}

object::~object()
{

}

void object::update()
{
    object::draw();
}

void object::draw()
{
    std::cout << "object1: " << int_object << std::endl;
}

