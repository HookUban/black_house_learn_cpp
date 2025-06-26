
#include <iostream>
using namespace std;

// 函数模板

// 两个整型交换函数
void swapInt(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

// 交换两个浮点型函数

void swapDouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

// 函数模板
template <typename T> // 声明一个模板，告诉编译器后面紧跟着的T不要报错，T是一个通用数据类型
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	cout << a << " " << b << endl;

	//swapInt(a, b);
	// 利用函数模板交换
	// 两种方式使用函数模板
	// 1.自动类型推导
	//mySwap(a, b);
	// 2.显示指定类型
	mySwap<int>(a, b); // 显示指定类型
	cout << a << " " << b << endl;

	//double c = 1.1;
	//double d = 2.2;
	//cout << c << " " << d << endl;
	//swapDouble(c, d);
	//cout << c << " " << d << endl;




	system("pause");
	return 0;
}