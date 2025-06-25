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

/*

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
*/


/*
 * 构造函数的分类及调用
 *      分类
 *          按照参数分类
 *              无参构造和有参构造
 *
 * **/

/*class Person
{
public:
    Person()
    {
        cout << "Person()构造函数"<< endl;
    }
    Person(int a)
    {
        age = a;
        cout << "Person(int a)构造函数"<< endl;
    }
    // 拷贝构造函数
    Person(const Person &p)
    {
        cout << "Person(Person &p)拷贝构造函数"<< endl;
        age = p.age;
    }

    ~Person()
    {
        cout << "~Person析构函数"<< endl;
    }

    int age;
};

void test01()
{
    // 括号法
//    Person p;
//    Person p2(10);
//    Person p3(p2);
//    cout << p2.age << endl;
//    cout << p3.age << endl;
    // 注意事项
    // 调用默认的构造函数不要加()
//    Person p1();//编译器会认为是函数声明，错误

    // 显示法
//    Person p1;
//    Person p2 = Person(10); // 有参构造
//    Person p3 = Person(p2);     // 拷贝构造

    // 匿名对象，特点：当前执行结束后，系统会立即回收匿名对象
//    Person(10);
//    cout << "Aaaaaa" << endl;

    // 注意事项2
    // 不要利用拷贝构造函数，初始化匿名对象   编译器会认为Person(p3) === Person p3; 重定义了，对象的声明

//    Person(p3);

    // 隐式转换法
    Person p4 = 10; // 相当于Person p4 = Person(10);
    Person p5 = p4;
}*/

/*
int main()
{
    test01();

    return 0;
}*/




#include <iostream>
using namespace std;

// 继承中的对象模型
class Base
{
public:
    int m_A;

protected:
    int m_B = 10;
private:
    int m_C;

};

class Son:public Base
{
public:
    int m_D;

};

void test01()
{
    Son s1;
    s1.m_A = 10;
//    s1.m_B = 10;
//    s1.m_C = 10;
    s1.m_D = 10;
    // 父类中所有非静态成员属性都会被子类继承下去
    // 父类中私有成员属性是被编译器给隐藏了，因此是访问不到的，但是确实被继承下去了
    cout << sizeof(s1) << endl; // 16 4个int

}


int main()
{
    test01();

    return 0;
}