#include "Object3.hpp"
#include "Engine.hpp"

Object3::Object3()
{

}

Object3::~Object3()
{

}

void Object3::update()
{
    Object2::update();
    Object3::draw();
}

void Object3::draw()
{
    std::cout << "object3: " << std::endl;
}
