#ifndef SNAKE_H
#define SNAKE_H
#include<windows.h>
class Snake{
    public:
        Snake(COORD pos, int vel);
        void changeDir(char dir);
        void moveSnake();
        COORD getPos();
    protected:
    private:
    COORD pos;
    int len;
    int vel;
    char direction;
};
#endif