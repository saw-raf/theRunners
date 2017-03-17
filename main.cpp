#include "Classes.hpp"
#include "functions.hpp"
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    Player R(78,24,5);
    cout << "x: "<<R.getX()<<" Y: "<<R.getY()<<endl;
    getchar();
    clearScreen();
    writeCharXY(79,0,'A');
    getchar();
    R.show();
    getchar();
    R.hide();
    return 0;
}
