

#include <iostream>
using namespace std;

// 继承中的对象模型
class Base
{
public:
    int m_A;

protected:
    int m_B;
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


// 利用开发人员命令提示工具查看对象模型
// 跳转盘符F:
// 跳转文件路径 cd 具体路径下
// 查看命名
// c1 /d1 reportSingleClassLayout类名 文件名



int main()
{
    test01();

    return 0;
}