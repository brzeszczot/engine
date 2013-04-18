#ifndef VIEW_HPP_INCLUDED
#define VIEW_HPP_INCLUDED

#include <iostream>

class Engine;
class View
{
    public:
        View();
        virtual ~View();
        void set_engine(Engine* v_en);
        virtual void draw()=0;
        virtual void update()=0;
        Engine* en;
};

#endif // VIEW_HPP_INCLUDED
