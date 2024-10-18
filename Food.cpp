#inlcude "Food.h"

Food::Food(){
    genFood();
}
void Food::genFood(){
    pos.X=rand() % WIDTH+1;
    pos.Y=rand() % HEIGHT+1;
}
COORD Food::getPos(){
    return pos;
}