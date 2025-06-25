
#include <iostream>

using namespace std;

/*
 * 当子类和父类出现同名的成员，如何通过子类对象，访问到子类或父类中同名的数据呢
 *      访问子类同名成员直接访问即可
 *      访问父类同名成员，需要加作用域，类名::成员
 *
 * */


// 继承中同名处理
class Base
{
public:
    Base()
    {
        m_A = 10;
    }
    void func()
    {
        cout << "Base - func() 调用"<< endl;
    }
    void func(int a)
    {
        cout << "Base - func(int a) 调用"<< endl;
    }
    int m_A;
};

class Son: public Base
{
public:
    Son()
    {
        m_A = 200;
    }
    void func()
    {
        cout << "Son - func() 调用"<< endl;
    }
    int m_A;
};

void test01()
{
    Son s;
    cout << s.m_A << endl;
    cout << s.Base::m_A << endl;
}

void test02()
{
    Son s;
    s.func();
    s.Base::func();

    // 如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏父类中所有同名成员函数
    // 如果想访问到父类中被隐藏的同名成员函数，需要加作用域

    s.Base::func(10);
}

int main()
{
//    test01();
    test02();
    return 0;
}

/**
 * 总结：
 *      1.子类对象可以直接访问到子类中同名成员
 *      2.子类对象加作用域可以访问到父类同名成员
 *      3.当子类与父类拥有同名的成员函数，子类会隐藏父类中同名成员函数，加作用域可以访问父类中同名函数
 *
 * */