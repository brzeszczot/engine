#include "view.hpp"

view::view()
{
    int_object = 666;
}

view::~view()
{

}

void view::set_engine(engine* v_en)
{
    en = v_en;
//    std::cout << en->ii << std::endl;
}
/*
void view::update()
{

}

void view::draw()
{
    std::cout << "view draw" << std::endl;
}
*/
