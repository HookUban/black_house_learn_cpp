#include <iostream>
using namespace std;

// 函数的默认参数
// 如果传入数据为空，则使用默认参数，否则使用传入的参数
//int func(int a = 0, int b = 10, int c = 10)
//{
//    return a + b + c;
//}
//

// 如果有个参数已经有了默认参数，则后面的参数，从左到右必须有默认参数
//int func2(int a = 0, int b, int c = 10); // error

// 2、如果函数的声明有默认参数，函数实现就不能有默认参数
// 声明和实现只能有一个默认参数
//int func2(int a = 10, int b = 10);
//int func2(int a, int b)
//{
//    return a + b;
//}

/*
int main() {

    int ret = func(20, 20);
    cout << ret<< endl;


    return 0;
}
*/

// 函数的占位参数，形参列表中可以有占位参数，调用函数时必须填补该位置

// 目前阶段占位参数用不到，后面的课程会用到
// 占位参数可以有默认参数
/*
void func(int a, int=10)
{
    cout << a << endl;
}

int main()
{
    func(10);

    return 0;
}
*/

// 函数重载
// 函数名可以相同，提高复用性
// 函数重载条件
// 同一个作用域，函数名称相同，函数参数类型不同或者个数不同或者顺序不同


// 函数重载的满足条件
// 1.同一个作用域
// 2.函数名称相同
// 3.函数参数的类型不同或者个数不同或者顺序不同

/*
void func()
{
    cout << "func()的调用" << endl;
}

void func(int a)
{
    cout << "func(int a) 的调用" << endl;
}

void func(double a)
{
    cout << "func(double a) 的调用" << endl;
}

void func(int a, double b)
{
    cout << "func(int a, double b) 的调用" << endl;
}

void func(double a, int b)
{
    cout << "func(double a, int b) 的调用" << endl;
}

// 注意函数的返回值不能作为函数重载的条件
int main()
{

    func();
    func(10);
    func(10.5);

    func(10, 10.5);
    return 0;
}*/

// 函数重载的注意事项
// 引用作为重载的条件

void func(int &a)
{
    cout << "func(int &a) 的调用" << endl;
}
void func(const int &a)
{
    cout << "func(const int &a) 的调用" << endl;
}

// 函数重载碰到默认参数

void func2(int a)
{
    cout << "func2(int a) 的调用" << endl;
}

void func2(int a, int b = 10)
{
    cout << "func2(int a) 的调用" << endl;
}
int main()
{
//    int a = 10;
//    func(a);
//    func(10);
//    func2(10); // 当函数重载碰到默认参数时，出现二义性；

    return 0;
}
