#include<iostream>
using namespace std;
#include<string>

class student{
    public:
        string name;
        int num;
    void fun{
        cout<<"姓名："<<name<<"学号："<<num<<endl;
    }
};

int main(){
    student s1;
    s1.name = "张三";
    s1.num = 1;
}