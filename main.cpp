#include "Classes.hpp"
#include "functions.hpp"
#include <iostream>
#include <cstdio>
#include <conio.h>
using namespace std;



int main()
{
    Player R(2,2,'X');
    char key;
    key=cin.get();
    cout<<(int)key<<endl;
    /*key=getch();
    do
    {
        R.show();
        switch(key)
        {
            case KEY_UP:
            R.moveUp();
            break;
            case KEY_DOWN:
            R.moveDown();
            break;
            case KEY_LEFT:
            R.moveLeft();
            break;
            case KEY_RIGHT:
            R.moveRight();
            break;
        }
    }while((key=getch())!=KEY_ESC);*/
    return 0;
}
