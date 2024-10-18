#include<Snake.h>

Snake::Snake(COORD pos, int vel){
    this->pos=pos;
    this->vel=vel;
    len=1;
    direction='n';
}
Snake::change_dir(char dir){
    direction=dir;
}