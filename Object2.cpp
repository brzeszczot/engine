#include "Object2.hpp"
#include "Engine.hpp"

Object2::Object2()
{
}

Object2::~Object2()
{

}

void Object2::update()
{
    Object::update();
    Object2::draw();
}

void Object2::draw()
{
    std::cout << "object2: " << std::endl;
}

