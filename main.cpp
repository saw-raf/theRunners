#include "Classes.hpp"
#include "functions.hpp"

using namespace std;

int main()
{
    Player R(2,2,'X');
    int key;
    R.show();
    do{
		key = _getch();
		if (key == 224 || key == 0)
		{
			key = _getch();
			switch (key)
			{

			case KEY_UP:
				R.moveUp(map,portalPosY,portalPosX,diamonds);
				break;

			case KEY_DOWN:
				R.moveDown(map, portalPosY, portalPosX, diamonds);
				break;

			case KEY_LEFT:
				R.moveLeft(map, portalPosY, portalPosX, diamonds);
				break;

			case KEY_RIGHT:
				R.moveRight(map, portalPosY, portalPosX, diamonds);
				break;

			}
			R.printPosition(diamonds);
		}

	} while (key != KEY_ESC);

	clearScreen();
	gotoxy(0, 0);

    return 0;
}
