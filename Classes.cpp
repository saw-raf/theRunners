#pragma once
#include "Classes.hpp"
#include "functions.hpp"
#include <iostream>
using namespace std;

/*CLASS: Runner*/
void Runner::show()
{
    writeCharXY(x,y,code);
}
void Runner::hide()
{
    writeCharXY(x,y,' ');
}

void Runner::moveUp()
{
    if(y>0)
    {
        hide();
        y--;
        show();
    }
}

void Runner::moveDown()
{
    if(y<23)
    {
        hide();
        y++;
        show();
    }
}

void Runner::moveLeft()
{
    if(x>0)
    {
        hide();
        x--;
        show();
    }
}

void Runner::moveRight()
{
    if(x<79)
    {
        hide();
        x++;
        show();
    }
}


/*CLASS: Player */

Player::Player()
{
    setPosition(40,12);
    setCode('P');
}

Player::Player(int xPos, int yPos)
{
    setPosition(xPos,yPos);
    setCode('P');
}

Player::Player(int xPos, int yPos,char character)
{
    setPosition(xPos,yPos);
    setCode(character);
}

Player::~Player()
{
}

void Player::printPosition()
{
	gotoxy(0, 24);
	cout << "x: ";
	cout.width(3);
	cout << x;
	cout << "  y: ";
	cout.width(3);
	cout << y;
}

