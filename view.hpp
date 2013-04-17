#ifndef VIEW_HPP_INCLUDED
#define VIEW_HPP_INCLUDED

#include <iostream>

class engine;
class view
{
    public:
        view();
        virtual ~view();
        void set_engine(engine* v_en);
        virtual void draw()=0;
        virtual void update()=0;
        engine* en;
        int int_object;
};

#endif // VIEW_HPP_INCLUDED
