
#include <iostream>
using namespace std;

/*
class Person
{
    int m_A;

    static int m_B;         // 静态成员变量不属于类对象上
    void func(){}           // 非静态成员函数不属于类对象上

    static void func2(){}
};

int Person::m_B = 0;
void test01()
{
    Person p;
    // 空对象占用内存空间是1字节
    // C++编译器会给每个空对象也分配一个字节的空间，是为了区分空对象占内存的位置
    // 每个空对象也应该有一个独一无二的内存地址

    cout << "size of p = " << sizeof(p) << endl;
}

void test02()
{
    Person p;

    cout << "size of p = " << sizeof(p) << endl;
}
int main()
{

    test02();

    return 0;
}*/

// this指针
// 1 解决名称冲突
// 2 返回对象本身用*this

class Person
{
public:
    Person(int age)
    {
        // this指针指向的是被调用的成员函数的对象
        this->age = age;
    }
    Person& PersonAddAge(Person &p)
    {
        this->age += p.age;
        return *this;
    }
    int age;
};

void test01()
{
    Person p1(18);
    cout << p1.age << endl;

}

void test02()
{
    Person p1(10);
    Person p2(10);
    // 链式编程思想
    p2.PersonAddAge(p1).PersonAddAge(p1);

    cout << "p2.age : "<< p2.age << endl;

}


int main()
{
//    test01();
    test02();
    return 0;
}