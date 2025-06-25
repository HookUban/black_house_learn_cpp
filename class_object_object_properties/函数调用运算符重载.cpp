

#include <iostream>

using namespace std;
class MyPrint
{
public:
    void operator()(string test)
    {
        cout <<test << endl;
    }
};

void MyPrint02(string test)
{
    cout << test<<endl;
}
void test01()
{
    MyPrint myPrint;
    myPrint("hello world"); // 由于使用非常类似函数调用，因此称为仿函数

    MyPrint02("hello world");
}

// 仿函数非常灵活，没有固定的写法
class MyAdd
{
public:
    int operator()(int num1, int num2)
    {
        return num1 + num2;
    }
};

void test02()
{
    MyAdd myAdd;
    int ret  =myAdd(100, 200);
    cout <<ret << endl;

    // 匿名函数对象
    cout << MyAdd()(10, 20)<<endl;

}

int main()
{

//    test01();
    test02();
    return 0;
}