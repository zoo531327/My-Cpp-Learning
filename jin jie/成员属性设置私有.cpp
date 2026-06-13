#include<iostream>
using namespace std;
#include<string>

//成员属性设置私有
//1、可以自己控制读写权限
//2、对于写可以检测数据有效性

//人类
class people{
    public:
        void setname(string name){
            m_name = name;
        }
        string getname(){
            return m_name;
        }

        int getage(){
            return m_age;
        }
        void setage(int age){
            if(age < 0 || age > 150){
                cout<<"年龄"<<age<<"输入有误，赋值失败"<<endl;
                return;
            }
            m_age = age;
        }

        void setidol(string idol){
            m_idol = idol;
        }
    private:
        string m_name;//可读可写
        int m_age = 18;//只读 也可写（范围在0-150）
        string m_idol;//只写
};

int main(){
    people p;
    p.setname("张三");
    cout<<"姓名："<<p.getname()<<endl;

    p.setage(24);
    cout<<"年龄："<<p.getage()<<endl;

    p.setidol("天草");
}