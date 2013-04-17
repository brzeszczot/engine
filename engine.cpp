#include "engine.hpp"

engine::engine()
{
    ii = 34;

    for(size_t ii=0; ii<15; ii++)
    {
        view* v;

        if(ii<5)
            v = new object();
        else if(ii<10)
            v = new object2();
        else
            v = new object3();

        v->set_engine(this);
        views.push_back(v);
    }

    for(size_t ii=0; ii<views.size(); ii++)
    {
        std::cout << ii << std::endl;
        views[ii]->update();
    }
}

engine::~engine()
{

}
