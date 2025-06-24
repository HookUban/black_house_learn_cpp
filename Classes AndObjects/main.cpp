#include <iostream>
#include <string>
using namespace std;
#include "point.h"
#include "circle.h"

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

//class Person
//{
//public:
//    string m_Name;
//protected:
//    string m_Car;
//private:
//    int m_Password;
//
//public:
//    void func()
//    {
//        m_Name = "张三";
//        m_Car = "拖拉机";
//        m_Password = 123456;
//    }
//};
//
//
//int main()
//{
//    Person p1;
//    p1.m_Name = "李四";
////    p1.m_Car = "奔驰";        // 保护权限在类外不能访问，私有权限也是不能
//
//    return 0;
//}

// c++中structure和class的唯一区别就是默认的访问权限不同
// struct       默认权限为公有
// class        默认权限为私有

/*

class C1
{
    int m_A;        // 默认权限是私有
    void func()
    {
        cout << "C1::func()" << endl;
    }
};

struct C2
{
    int m_A;
    void func()
    {
        cout << "C2::func()" << endl;
    }
};

int main()
{
    C1 c1;
//    c1.m_A = 10;
//    c1.func();
//

    C2 c2;
    c2.m_A = 10;
    c2.func();
    return 0;
}*/

/*
// 成员属性设置为私有
// 可以自己控制读写权限，对于写可以检测数据有效性

class Person
{
private:
    string m_Name;  // 姓名，可读可写
    int m_Age = 18;      // 只读

    string m_Idol;  // 只写

public:
    void setName(string name)
    {
        m_Name = name;
    }

    string getName()
    {
        return m_Name;
    }
    int getAge()
    {
        return m_Age;
    }

    void setAge(int age)
    {
        if (age >= 0 && age <= 150)
        {
            m_Age = age;
        }
        else
        {
            cout << "age is illegal" << endl;
        }
    }
    void setIdol(string idol)
    {
        m_Idol = idol;
    }

};

int main()
{
    Person p;
//    p.m_Name = "张三";
    p.setName("张三");
    cout << p.getName() << endl;

    p.setAge(20);
    cout << "age:" << p.getAge() <<endl;

    p.setIdol("王五");
//    cout << "idol:" << p.m_Idol << endl;//error


    return 0;
}*/
/*

// 设计一个立方体类， 求体积，表面积，分别用全局函数和成员函数判断两个立方体是否相等。

class Cube
{
private:
    int m_L = 1;
    int m_W = 2;
    int m_H = 3;

public:

    void setCube(int l=0, int w=0, int h=0)
    {
        m_L = l;
        m_W = w;
        m_H = h;
    }
    void setL(int l)
    {
        m_L = l;
    }
    void setW(int w)
    {
        m_W = w;
    }

    void setH(int h)
    {
        m_H = h;
    }
    int getL()
    {
        return m_L;
    }
    int getW()
    {
        return m_W;
    }
    int getH()
    {
        return m_H;
    }

    int getVolume()
    {
        return m_L * m_W * m_H;
    }
    int getArea()
    {
        return 2 * (m_L * m_W + m_W * m_H + m_L * m_H);
    }

    bool isSame(Cube &c)
    {
        return c.getL() == m_L && c.getW() == m_W && c.getH() == m_H;
    }
};


bool isSame(Cube &c1, Cube &c2)
{
    return c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH();
}

int main()
{
    Cube c1;
    c1.setCube(1, 2, 3);
    cout << "Volume:\t" << c1.getVolume() << endl;

    cout << "Area:\t" << c1.getArea() << endl;

    c1.setCube(2, 3, 4);
    cout << "Volume:\t" << c1.getVolume() << endl;

    cout << "Area:\t" << c1.getArea() << endl;

    Cube c2;
    c2.setCube(2, 3, 4);

    bool ret = isSame(c1, c2);
    cout << "c1 and c2 is same:" << (ret == 1? "true" : "false") << endl;
    bool ret2 = c1.isSame(c2);
    cout << "c1 and c2 is same:" << (ret2 == 1? "true" : "false") << endl;

    return 0;
}*/


// 设计一个圆形类，和一个点类，计算点和圆的关系

//class Point
//{
//private:
//    int m_x;
//    int m_y;
//
//
//public:
//    void setPoint(int x, int y)
//    {
//        m_x = x;
//        m_y = y;
//    }
//    int getX()
//    {
//        return m_x;
//    }
//    int getY()
//    {
//        return m_y;
//    }
//};


//class Circle
//{
//private:
//    int m_r;
//    Point m_Center;
//
//public:
//    void setCircle(int r, int x, int y)
//    {
//        m_r = r;
//        m_Center.setPoint(x, y);
//    }
//    int getR()
//    {
//        return m_r;
//
//    }
//    int getX()
//    {
//        return m_Center.getX();
//    }
//    int getY()
//    {
//        return m_Center.getY();
//    }
//};

void isInCircle(Point &p, Circle &c)
{
    int distance = (c.getX() - p.getX())*(c.getX() - p.getX()) + (c.getY() - p.getY())*(c.getY() - p.getY());
    if (distance == c.getR() * c.getR())
    {
        cout << "点在圆上" << endl;
    }
    else if( distance < c.getR() * c.getR())
    {
        cout << "点在圆内" << endl;
    }
    else
    {
        cout << "点在圆外" << endl;
    }
}


int main()
{
    Point p;
    p.setPoint(0, 1);
    Circle c;
    c.setCircle(1, 0, 0);
    isInCircle(p, c);

    return 0;
}


