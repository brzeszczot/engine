#include "View.hpp"
#include "Engine.hpp"

View::View()
{
    en = NULL;
}

View::~View()
{

}

void View::set_engine(Engine* v_en)
{
    en = v_en;
}

