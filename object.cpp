#include "object.hpp"
#include "engine.hpp"

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
    std::cout << "object1: " << en->ii << std::endl;
}

