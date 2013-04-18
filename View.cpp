#include "view.hpp"
#include "engine.hpp"

view::view()
{
    en = NULL;
}

view::~view()
{

}

void view::set_engine(engine* v_en)
{
    en = v_en;
}

