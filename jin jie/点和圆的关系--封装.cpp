#include<iostream>
using namespace std;
#include<string>

//点类
class point{
    public:
        void setX(int x){
            m_x = x;
        }
        int getX(){
            return m_x;
        }
        void setY(int y){
            m_y = y;
        }
        int getY(){
            return m_y;
        }

    private:
        int m_x;
        int m_y;
};

//圆类
class circle{
    public:
        void setR(int r){
            m_r = r;
        }
        int getR(){
            return m_r;
        }
        void setCenter(point center){
            m_center = center;
        }
        point getCenter(){
            return m_center;
        }
    private:
        int m_r;
        point m_center;
};

void isInCircle(circle &c , point &p){
    int distance = (c.getCenter().getX()-p.getX())*(c.getCenter().getX()-p.getX())+(c.getCenter().getY()-p.getY())*(c.getCenter().getY()-p.getY());
    int rdistance = c.getR()*c.getR();

    if(distance == rdistance){
        cout<<"点在圆上"<<endl;
    }
    else if(distance > rdistance){
        cout<<"点在圆外"<<endl;
    }
    else{
        cout<<"点在圆内"<<endl;
    }
}

int main(){
    //创建圆
    circle c;
    c.setR(10);
    point center;
    center.setX(10);
    center.setY(0);
    c.setCenter(center);

    //创建点
    point p;
    p.setX(10);
    p.setY(10);

    //判断关系
    isInCircle(c,p);
}