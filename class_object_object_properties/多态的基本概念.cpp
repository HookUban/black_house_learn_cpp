
#include <iostream>

using namespace std;


/*
 * 多态是C++面向对象三大特性之一
 * 多态分为两类
 *      静态多态：函数重载和运算符重载属于静态多态，复用函数名
 *      动态多态：派生类和虚函数实现运行时多态
 *
 * 静态多态和动态多态的区别：
 *      静态多态的函数地址早绑定-编译阶段确定函数地址
 *      动态多态的函数地址晚绑定-运行时确定函数地址
 *
 * */

class Animal
{
public:
    virtual void speak()
    {
        cout << "动物在说话" << endl;
    }
};



class Cat:public Animal
{
public:
    // 重写 函数返回值类型 函数名 参数列表 完全相同
    void speak()
    {
        cout << "小猫在说话" <<  endl;
    }
};

class Dog:public Animal
{
public:
    void speak()
    {
        cout << "小狗在说话" << endl;
    }
};


// 地址早绑定    在编译阶段确定函数地址
//  如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定

// 动态多态满足条件
// 1.有继承关系
// 2.子类重写父类的虚函数

// 动态多态的使用
// 父类的指针或者引用指向子类对象


void doSpeak(Animal& animal)
{
    animal.speak();
}

void test01()
{
    Cat cat;
    doSpeak(cat);
    Dog dog;
    doSpeak(dog);
}

void test02()
{
    cout << "sizeof Animal = " << sizeof(Animal)<< endl;
}

int main()
{
//    test01();
    test02();
    return 0;
}

/*
 * 多态满足条件
 * 子类重写父类中的虚函数
 *
 * 多态使用条件
 *
 * 父类指针或引用指向子类对象
 * 重写：函数返回值类型 函数名 参数列表 完全相同
 *
 *
 * **/