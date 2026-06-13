#pragma once
#include<iostream>
using namespace std;
#include"point.h"

//圆类
class circle{
    public:
        void setR(int r);

        int getR();

        void setCenter(point center);

        point getCenter();

    private:
        int m_r;
        point m_center;
};