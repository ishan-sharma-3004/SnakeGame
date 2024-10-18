#include<iostream>
#include<cstdlib>
#include<Snake.h>
#include<Food.h>
using namespace std;

#define WIDTH 50
#define HEIGHT 25
Snake snake((WIDTH/2, HEIGHT/2),1);
void board(){
    for(int i=0;i<HEIGHT;i++){
        cout<<"\t\t|#";
        for(int j=0;j<WIDTH-2;j++){
            if(i==0||i==HEIGHT-1)
                cout<<'#';
            else if(i==snakePos.y && j==snakePos.x)cout<<'0';
            else
                cout<<" ";
        }
        cout<<"#\n";
    }
}
int main(){
    while(true){
        board();
        if(kbhit())
        {
            switch(getch()){
                case 'w': 
                    snake.changeDir('u');
                    break;
                case 'a': 
                    snake.changeDir('l');
                    break;
                case 's':
                    snake.changeDir('d');
                    break;
                case 'd':
                    snake.changeDir('r');
                    break;
            }
        }
        snake.moveSnake();
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (0, 10));
    }
}