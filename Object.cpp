#include "Object.hpp"
#include "Engine.hpp"

Object::Object()
{
}

Object::~Object()
{

}

void Object::update()
{
    Object::draw();
}

void Object::draw()
{
    std::cout << "object1: " << std::endl;
}

