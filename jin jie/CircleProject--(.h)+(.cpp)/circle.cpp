#include"circle.h"

void circle::setR(int r){
    m_r = r;
}
int circle::getR(){
    return m_r;
}
void circle::setCenter(point center){
    m_center = center;
}
point circle::getCenter(){
    return m_center;
}

