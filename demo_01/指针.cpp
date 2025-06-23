
#include <iostream>
#include <windows.h>

using namespace std;

void swap0(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

}

void swap02(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void swap03(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);

//    int a = 10;
//    cout<< a << endl;
//    int* pa = &a;
//    cout << *pa << endl;
//    cout << pa << endl;
//
//    *pa = 20;
//    cout<<a<<endl;
//    cout<<*pa<<endl;
//    int a = 10;
//    int* pa = &a;
//    cout<<sizeof(pa)<<endl;
//    cout<<sizeof(*pa)<<endl;
//    cout<<sizeof(a)<<endl;
//    cout<<sizeof(char)<<endl;
//    cout<<sizeof(int)<<endl;
//    cout<<sizeof(char*)<<endl;
//    cout<<sizeof(int*)<<endl;
//
    // const修饰指针    常量指针
    // 特点：指针的指向可以修改，但是指针的指向的值不可以改
    // const 修饰常量   指针常量
    // 特点：指针的指向不可以修改，但是指针指向的值可以修改
    // const即修饰指针又修饰常量
    // 特点：指针的指向不可以修改，指针指向的值不可以修改

    // 1.const修饰指针
//    int a = 10;
//    int b = 10;

//    const int* p = &a;
//    p = &b;
//    *p = 20; // 错误
    // 2.const修饰常量 指针常量
    // 指针和数组
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

//    cout<<arr[0]<<endl;
//    int* p = arr;
//    cout<<*p<<endl;
//    cout<<*(p+1)<<endl;
//    int* p2 = arr;
//
//    for (int i = 0; i < 10; i++)
//    {
//        cout<<*(p2+i)<<endl;
//    }
//    for (int i = 0; i < 10; i++)
//    {
//        cout<<*p2<<endl;
//        p2++;
//    }
    int a = 10;
    int b = 20;

    cout<<a<<b<<endl;
//    swap0(a, b);
//    swap02(a, b);
    swap03(&a, &b);
    cout<<a<<b<<endl;


}