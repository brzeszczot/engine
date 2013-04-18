#include "Engine.hpp"

using namespace std;

Engine::Engine(Library* v_lib): lib(v_lib)
{
    views = new vector<View*>;
    isRunning = true;

    addObj();
    run();
}

Engine::~Engine()
{
    for(size_t ii=0; ii<views->size(); ii++)
        delete (*views)[ii];
    views->clear();
    delete views;
}

void Engine::run()
{
    while(isRunning)
    {
        updateAll();
    }
}

void Engine::addObj()
{
    for(size_t ii=0; ii<15; ii++)
    {
        View* v;

        if(ii<5)
            v = new Object();
        else if(ii<10)
            v = new Object2();
        else
            v = new Object3();

        v->set_engine(this);
        views->push_back(v);
    }
}

void Engine::updateAll()
{
    for(size_t ii=0; ii<views->size(); ii++)
    {
        cout << ii << endl;
        (*views)[ii]->update();
    }
}
