#pragma once
#include<iostream>
using namespace std;
//点类
class point{
    public:
        void setX(int x);

        int getX();

        void setY(int y);

        int getY();

    private:
        int m_x;
        int m_y;
};
