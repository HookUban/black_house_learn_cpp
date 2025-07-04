
#include <iostream>
using namespace std;


// 运算法重载概念：对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型


/*
// 加号运算符重载



class Person
{
public:
    // 成员函数实现重载+号
//    Person operator+(Person& p)
//    {
//        Person tmp;
//        tmp.m_A = this->m_A + p.m_A;
//        tmp.m_B = this->m_B + p.m_B;
//        return tmp;
//    }

    int m_A;
    int m_B;
};

// 2.全局函数重载+号
Person operator+(Person& p1, Person& p2)
{
    Person tmp;
    tmp.m_A = p1.m_A + p2.m_A;
    tmp.m_B = p1.m_B + p2.m_B;
    return tmp;
}

// 函数重载的版本
Person operator+(Person& p1, int num)
{
    Person tmp;
    tmp.m_A = p1.m_A + num;
    tmp.m_B = p1.m_B + num;
    return tmp;
}


void test01()
{
    Person p1;
    p1.m_A = 10;
    p1.m_B = 10;
    Person p2;
    p2.m_A = 10;
    p2.m_B = 10;

    // 成员函数本质的调用
//    Person p3 = p1.operator+(p2);
// 全局函数本质的调用
//    Person p3 = operator+(p1, p2);
    Person p3 = p1 + p2;

    cout << "p3.m_A = " << p3.m_A<< endl;
    cout << "p3.m_B = " << p3.m_B<< endl;

    // 运算符重载，也可以发生函数重载
    Person p4 = p1 + 20;
    cout << "p4.m_A = " << p4.m_A<< endl;

}
// 1.成员函数重载+号
//  2.全局函数重载+号


int main()
{
    test01();

    return 0;
}*/


/*
// 左移运算符重载

class Person
{
    friend ostream& operator<<(ostream& cout, Person p);


public:
    Person(int a, int b)
    {
        m_A = a;
        m_B = b;
    }
private:
    // 利用成员函数重载 左移运算符 p.operator<<(cout)  简化版本  p << cout
    // 通常不会利用成员函数重载 左移运算符，因为无法实现cout在左侧

    int m_A;
    int m_B;
};

// 只能利用全局函数重载 左移运算符
ostream& operator<<(ostream& cout, Person p) // 本质， operator << (cout, p) 简化 cout << p
{
    cout << "m_A = " << p.m_A << " m_B = " << p.m_B << endl;
    return cout;
}

void test01()
{
    Person p(10, 10);
//    p.m_A = 10;
//    p.m_B = 10;

//    cout << p.m_A << endl;
    cout << p << endl<<"hello world"<<endl;
}


int main()
{
    test01();
    return 0;
}*/


// 递增运算符重载

// 自定义的整型
class MyInteger
{
    friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
    MyInteger()
    {
        m_Num = 0;
    }

    // 重载前置++运算符
    MyInteger& operator++()
    {
        m_Num++;
        return *this;
    }

    // 重载后置++运算符

    MyInteger operator++(int) // int 代表占位参数，可以用于区分前置和后置++运算符
    {
        MyInteger temp = *this;
        m_Num++;
        return temp;
    }

    // 重载前置--运算符
    MyInteger& operator--()
    {
        m_Num--;
        return *this;
    }


    // 重载后置--运算符
    MyInteger operator--(int)
    {
        MyInteger temp = *this;
        m_Num--;
        return temp;
    }
private:
    int m_Num;
};

// 重载一下左移运算符
ostream& operator<<(ostream& cout, MyInteger myint)
{
    cout << myint.m_Num;
    return cout;
}

void test01()
{
    MyInteger myint;
    cout << ++(++myint) << endl;
    cout << myint << endl;
}


void test02()
{
    MyInteger myint;
    cout << myint++ << endl;
    cout << myint << endl;

}

void test03()
{
    MyInteger myint;
    cout << --(--myint) << endl;
    cout << myint << endl;

    cout << myint-- << endl;
    cout << myint << endl;

}


int main()
{
//    test01();
//    test02();
    test03();
    return 0;
}