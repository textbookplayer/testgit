#include <conio.h>
#include <iostream>
#include <windows.h>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD cursorPosition;

void gotoxy(int x, int y){
    cursorPosition.X = x;
    cursorPosition.Y = y;
    SetConsoleCursorPosition(console, cursorPosition);
}

class Point
{
private:
    /* data */
    int x;
    int y;
public:
    Point(/* args */){
        x = y = 10;
    }
    Point(int x, int y)
    {
        this -> x = x;
        this -> y = y;
    }
    // ~Point();
    void setPoint(int x, int y){
        this -> x = x;
        this -> y = y;   
    };

    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    void moveUp(){
        y--;
    }

    void moveDown(){
        y++;
    }

    void moveLeft(){
        x--;
    }

    void moveRight(){
        x++;
    }

    void draw(){
        gotoxy(x, y);
        cout << "*";
    }

    void erase(){
        gotoxy(x, y);
        cout << " ";
    }

    void debug(){
        cout << "(" << x << "," << y << ")";
    }
};


int main(){
    Point p(5,20);
    p.draw();
    
    return 0;
    
}