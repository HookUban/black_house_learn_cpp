#include <iostream>
#include <string>

using namespace std;

/*
 * 对象的初始化和清理
 *      构造函数和析构函数
 *
 * 构造函数：
 *      没有返回值也不写void
 *      函数名称和类名相同
 *      有参数，所有可以发生重载
 *      程序在调用对象的时候会自动调用构造，无需手动调用且只会调用一次
 * 析构函数
 *      没有返回值也不写void
 *      函数名称和类名相同，但前面加~
 *      析构函数不可以有参数，所以不可以发生重载
 *      程序在销毁对象时，会自动调用析构，无需手动调用且只会调用一次
 *
 *
 * */

class Person
{
public:
    Person()
    {
        cout << "Person()"<< endl;
    }

    ~Person()
    {
        cout << "~Person()"<< endl;
    }
};


class Person2
{
public:
    Person2()
    {
        cout << "Person2()"<< endl;
    }

    ~Person2()
    {
        cout << "~Person2()"<< endl;
    }
};

void test01()
{
          // 在栈中创建对象，函数结束会销毁对象

}

int main() {
    Person2 p2;
//    test01();
    Person p;

    system("pause");
    return 0;
}
