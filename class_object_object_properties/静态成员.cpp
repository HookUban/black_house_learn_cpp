
#include <iostream>

using namespace std;

/*

*/
/*
 * 静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员
 * 静态成员分为：
 *      静态成员变量：
 *              所有对象共享同一份数据
 *              在编译阶段分配内存
 *              类内声明，类外初始化
 *
 *      静态成员函数：
 *              所有对象共享同一个函数
 *              静态成员函数只能访问静态成员变量
 *
 *
 *
 *//*


class Person
{
public:
    // 所有对象都共享用一份数据
    // 在编译阶段分配内存
    // 类内声明，类外初始化

    static int m_A;
    // 静态成员变量也是有访问权限的

private:
    static int m_B;
};

int Person::m_A = 100;
int Person::m_B = 200;

void test01()
{
    Person p;
    cout << p.m_A << endl;
    Person p2;
    p2.m_A = 200;
    cout << p.m_A << endl;

}


void test02()
{
    // 静态成员函数不属于某个对象上，所有对象都共享同一个函数
    // 因此静态成员函数有两种访问方式
    // 1.通过对象进行访问
    Person p;
    cout << p.m_A << endl;
    // 2.通过类名进行访问
    cout << Person::m_A << endl;
//    cout << Person::m_B << endl;// 私有静态成员变量不能通过类型进行访问

}
int main()
{
    test02();
    return 0;
}*/


 // 静态成员函数
 // 所有对象都共享同一个函数
 // 静态成员函数只能访问静态成员变量



class Person
{
public:
    // 静态成员函数
    static void func()
    {
        m_A = 100;
//        m_B = 100; // error// 静态成员函数不可以访问非静态成员变量
        cout << "static void func调用 " << endl;
    }
    static int m_A;
    int m_B;
};
int Person::m_A = 100;

void test01()
{
    // 通过对象
    Person p;
    p.func();
    // 通过类名
    Person::func();
}

int main()
{
    test01();

    return 0;
}