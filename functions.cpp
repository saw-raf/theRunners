#include "functions.hpp"
#include <conio.h>

void gotoxy(int x, int y)
{
     COORD c;
     c.X = x;
     c.Y = y;
     SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), c);

}

void clearScreen()
{
    system("cls");
}
void writeCharXY(int x,int y, char code)
{
    gotoxy(x,y);
    putchar(code);
}

int getKey( void )
{
    int key = getch();
    return ( key == 0 ) ? getch() << 8 : key;
}



