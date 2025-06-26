
#include <iostream>
using namespace std;

// ����ģ��

// �������ͽ�������
void swapInt(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

// �������������ͺ���

void swapDouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

// ����ģ��
template <typename T> // ����һ��ģ�壬���߱�������������ŵ�T��Ҫ����T��һ��ͨ����������
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
	// ���ú���ģ�彻��
	// ���ַ�ʽʹ�ú���ģ��
	// 1.�Զ������Ƶ�
	//mySwap(a, b);
	// 2.��ʾָ������
	mySwap<int>(a, b); // ��ʾָ������
	cout << a << " " << b << endl;

	//double c = 1.1;
	//double d = 2.2;
	//cout << c << " " << d << endl;
	//swapDouble(c, d);
	//cout << c << " " << d << endl;




	system("pause");
	return 0;
}