

#include <iostream>

using namespace std;


/**
 *
 * 常函数：
 *      成员函数后加const修饰后我们称为这个函数为常函数
 *      常函数 内不可以修改成员属性
 *      成员属性声明时加关键字mutable后，在常函数中依然可以修改
 *
 * 常对象：
 *      声明对象前加const修饰后，我们称为常对象
 *      常对象只能调用常函数
 *
 *
 * */

class Person
{
public:
    // 在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改；
    void showPerson() const
    {
//        this->m_A = 100; // error ,常函数内不可以修改成员属性
        this->m_B = 100;
    }
    Person()
    {

    }
    Person(int b)
    {
        m_B = b;
    }

    int m_A;
    mutable int m_B; // 特殊变量，即使在常函数中，也可以修改,加上mutable关键字
};

void test01()
{
    Person p;
    p.showPerson();
}


void test02()
{
    const Person p(1);  // 在对象前加const，变为常对象
}

int main()
{


    return 0;
}