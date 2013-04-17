#include "object3.hpp"
#include "engine.hpp"

object3::object3()
{

}

object3::~object3()
{

}

void object3::update()
{
    object2::update();
    object3::draw();
}

void object3::draw()
{
    std::cout << "object3: " << en->ii << std::endl;
}
