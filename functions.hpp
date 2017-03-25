#pragma once
#include <stdlib.h>
#include <windows.h>
#include <cstdio>

using namespace std;

enum KEY_CODES
{
	KEY_UP = 72,
	KEY_DOWN = 80,
	KEY_LEFT = 75,
	KEY_RIGHT = 77,
	KEY_ESC = 27
};


void clearScreen();
void writeCharXY(int x, int y, char code);



