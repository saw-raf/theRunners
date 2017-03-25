#include "Classes.hpp"
#include "functions.hpp"
#include <conio.h>

using namespace std;

int main()
{
    Player R(0,0,'X');
    int key;
    R.show();
	R.printPosition();
    do{
		key = _getch();
		if (key == 224 || key == 0)
		{
			key = _getch();
			switch (key)
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
			R.printPosition();
		}

	} while (key != KEY_ESC);

	clearScreen();
	//gotoxy(0, 0);

    return 0;
}
