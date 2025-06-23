#include <iostream>
#include <string>
using namespace std;

/*
 * C++面向对象的三大特性为：封装、继承、多态
 *
 *
 *
 * **/
/*

// 设计一个圆类，求圆的周长
// 圆的周长的公式为：2*PI*r
const double PI = 3.14;

class Circle
{
    // 访问权限，属性，行为
public:
    // 公共权限
    // 属性
    int m_r = 0;

    // 行为
    double calculatePerimeter()
    {
        return 2 * PI * m_r;
    }


};


int main() {

    // 通过圆类创建具体的圆(对象)
    Circle c1;
    c1.m_r = 10;
    cout<<"圆的周长为："<<c1.calculatePerimeter()<<endl;
    return 0;
}
*/

/*

class Student
{
public:
    string name = "张三";
    string num = "1001";

    void show()
    {
        cout<< "姓名：" << name << "\t学号：" << num << endl;
    }

    void setName(string name)
    {
        this->name = name;
    }
    void setNum(string num)
    {
        this->num = num;
    }
};


int main()
{
    Student s1;
    s1.name = "赵六";
    s1.num = "1002";
    s1.show();

    s1.setName("王五");
    s1.setNum("1003");
    s1.show();

    return 0;
}*/


// 访问权限
// 公共权限，保护权限，私有权限
// public, protected, private
// public: 公有权限，类内、类外都可以访问
// protected: 保护权限，类内可以访问，类外不可以访问   // 子儿子可以访问父亲中的保护内容
// private: 私有权限，类内可以访问，类外不可以访问

class Person
{
public:
    string name;
protected:
    string m_Car;
private:
    int m_Password;

};