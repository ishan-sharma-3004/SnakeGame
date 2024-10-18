#ifndef FOOD_H
#define FOOD_H

#include<windows.h>
#include<cstdlib>

class Food{
    private:
        COORD pos;
    public:
        Food();
        void genFood();
        COORD getPos();
};
#endif