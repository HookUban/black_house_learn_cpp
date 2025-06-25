#include <iostream>
using namespace std;


/*
 * 继承的语法：class 子类: 继承方式 父类
 *
 * 继承方式一共有三种：
 *      公共继承
 *      保护继承
 *      私有继承
 *
 *
 * */


// 公共继承
class Base1
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};


class Son1:public Base1
{
public:
    void func()
    {
        m_A = 10;   // 父类中的公共权限成员 到子类中依然是公共权限
        m_B = 10;   // 父类中的保护权限成员 到子类中依然是保护权限
        // m_C = 10; 父类中的私有权限成员 到子类中依然是私有权限
    }

};

void test01()
{
    Son1 s1;
    s1.m_A = 100;
//    s1.m_B = 100; //  error 到Son1中m_B是保护权限类外访问不到
//    s1.m_C = 100;
}

// 保护继承
class Base2
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};


class Son2:protected Base2
{
//    friend void test02();
public:
    void func()
    {
        m_A = 10;   // 父类中的公共成员到子类中保护权限
        m_B = 10;   // 父类中保护成员，到子类中依然是保护权限
        // m_C = 10;//error
    }
};


class Son3:private Base2
{
//    friend void test02();
public:
    void func()
    {
        m_A = 10;
        m_B = 10;
        // m_C = 10;
    }
};

void test02()
{
    Son2 s2;
//    s2.m_A = 100;//error 到Son2中m_A是保护权限类外访问不到, 类外访问不到
    Son3 s3;
//    s3.m_A = 100;
}

int main()
{

    return 0;
}