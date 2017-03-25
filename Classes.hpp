#pragma once
#include "functions.hpp"

class Runner
{

public:

    const int getX(){return x;}
    const int getY(){return y;}
    void setX(int xPos){x=xPos;}
    void setY(int yPos){y=yPos;}
    void setCode(char character){code=character;}
    void setPosition(int xPos,int yPos){setX(xPos);setY(yPos);}

    void show();
    void hide();
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();

protected:
    int x;
    int y;
    char code;
};


class Player
    :public Runner
{
public:
    Player();
    Player(int xPos,int yPos);
    Player(int xPos,int yPos, char character);
    ~Player();
	void printPosition();
};



class Mob:
    public Runner
{
    Mob();
    ~Mob();
};
