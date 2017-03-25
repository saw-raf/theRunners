#pragma once
#include <stdlib.h>
#include <windows.h>
#include <cstdio>

using namespace std;

void clearScreen();
void writeCharXY(int x, int y, char code);
int getKey( void );

enum KEY_CODES
{
 KEY_UP = 0x4800,
 KEY_DOWN = 0x5000,
 KEY_LEFT = 0x4b00,
 KEY_RIGHT = 0x4d00,
 KEY_ESC = 0x001b
};

