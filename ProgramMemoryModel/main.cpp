#include <iostream>
#include <windows.h>

using namespace std;


/*
 * 代码区：存放函数体的二进制代码，由操作系统进行管理的
 * 全局区：存放全局变量和静态变量以及常量
 * 栈区：由编译器自动分配释放，存放函数的参数值，局部变量等
 * 堆区：由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收
 *
 * 内存四区的意义：
 * 不同区域存放的数据，赋予不同的生命周期，给我们更强大的灵活编程
 *
 * 在程序编译后，生成了exe可执行文件，未执行该程序前分为两个区域
 *      代码区：
 *      存放CPU执行的机器指令
 *      代码区是共享的，共享的目的是对于频繁被执行的程序，只需在内存中有一份代码即可
 *      代码区是只读的，使其只读的原因是防止程序意外被修改它的指令
 *      全局区：
 *      全局变量和静态变量存放在此
 *      全局区还包含了常量区，字符串常量和其他常量也存放在此
 *      该区域的数据在程序结束后由操作系统释放
 *
 * */
/*


int g_a = 10;
int g_b = 20;
const int c_g_a = 10;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int a = 10;
    int b = 20;

    cout << "局部变量a的地址:\t" << &a << endl;
    cout << "局部变量b的地址:\t" << &b << endl;

    cout << "全局变量g_a的地址:\t" << &g_a << endl;
    cout << "全局变量g_b的地址:\t" << &g_b << endl;

    static int c = 20;
    static int d = 30;
    cout << "静态变量c的地址:\t" << &c << endl;
    cout << "静态变量d的地址:\t" << &d << endl;


    // 常量=》字符串常量和const修饰的变量
    cout << "字符串常量的地址:\t" << &"hello world" << endl;

    // const 修饰的全局变量
    cout << "const修饰的全局变量c_g_a的存储地址:\t" << &c_g_a << endl;

    const int c_l_a = 10;
    const int c_l_b = 10;
    cout << "const修饰的局部变量c_l_a的存储地址:\t" << &c_l_a << endl;
    cout << "const修饰的局部变量c_l_b的存储地址:\t" << &c_l_b << endl;

    return 0;
}
*/


/**
 *
 *
 * 栈区：
 * 编译器自动分配释放，存放函数的参数值和局部变量等
 * 注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放
 *
 *
 * */

//int* func()
//{
//    int a = 10;
//    return &a;
//}
//
//
//int main()
//{
//
//    int* p = func();
//    cout << *p << endl;
//    cout << *p << endl;
//    return 0;
//}

/*
 *
 * 堆区：
 *     由程序员分配释放，若程序员不释放，程序结束之后由操作系统回收
 *     在c++中主要利用new在堆区申请开辟内存
 *      释放利用操作符delete
 *
 * **/


/*
int* func()
{
    int* p = new int(10);
    return p;
}

int main()
{
    // 在堆区开辟数据
    int* p = func();
    cout << *p << endl;

    return 0;
}*/

/*

int* func()
{
    // new 返回该类型的指针

    int* p = new int(10);
    return p;
}

void test_01()
{
    int* p = func();
    cout << *p << endl;
    // 堆区的数据由程序员释放，delete
    delete p;
    p = nullptr;
    cout << *p << endl;
}

void test_02()
{
    // 创建一个10整型数据的数组，在堆区
    int* arr = new int[10];
    for (int i = 0 ; i < 10; i++)
    {
        arr[i] = i + 100;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    delete[] arr;
}


int main()
{
//    test_01();
    test_02();
    return 0;
}*/


/*
 *
 * 引用：
 *      数据类型&变量名 = 原变量名;
 *
 * */
/*
int main()
{
    int a = 10;
    int& b = a;
    cout << a << endl;
    cout << b << endl;
    b = 20;
    cout << a << endl;
    cout << b << endl;

    return 0;
}
*/

/*
 * 引用必须初始化
 *      int &b;error
 *
 * 引用一旦初始化后，就不可以更改了
 *
 *
 * */

/*
int main()
{
    int a = 10;
    int &b = a;

    int c = 20;

    // b = c // 赋值操作，而不是引用

    b = c;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}*/

/**
 *
 * 引用做函数参数
 * 可以利用引用的技术让形参修饰实参
 *
 * */


// 交换函数

/*
// 值传递
void mySwap_01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// 地址传递
void mySwap_02(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


// 引用传递
void mySwap_03(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}


int main()
{
    int a = 10;
    int b = 20;

    cout << a << " ";
    cout << b << endl;
//    mySwap_01(a, b);
//    mySwap_02(&a, &b);
    mySwap_03(a, b);
    cout << a << " ";
    cout << b << endl;
}*/


// 不要返回局部变量的引用，栈区的数据出了函数自动释放
//int& test_01()
//{
//    int a = 10;
//    return a;
//
//}


/*
int& test_02()
{
    static int a = 10;      // 静态变量存放在全局区，全局区的数据在程序结束之后释放
    return a;
}


int main()
{
    // 引用做函数的返回值
    // 1. 不要返回局部变量的引用
    // 2. 函数的调用可以作为左值
//    int &ref = test_01();
//    cout << ref << endl;

    int &ref = test_02();
    cout << ref <<endl;
    cout << ref <<endl;
    cout << ref <<endl;

    test_02() = 2000;
    cout << ref <<endl;
    cout << ref <<endl;

    return 0;
}*/

// 引用的本质是int* const ref = &a; 指针常量是指针指向不可更改，也说明为什么引用不可更改


// 常量引用，用来修饰形参防止误操作




int main()
{
    int a = 10;
//    int &ref = 10;  // 引用必须引一块合法的内存空间
    // 加上const之后，编译器将代码修改为: int temp = 10; const int &ref = temp;

    const int &ref = 10;

    return 0;
}

