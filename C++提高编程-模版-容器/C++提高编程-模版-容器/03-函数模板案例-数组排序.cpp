#include <iostream>
using namespace std;



// 实现一个通用的对数组进行排序的函数
// 规则，从大到小
// 算法 选择
// 测试 char 数组 int 数组



// 交换函数模板
template <typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}


// 排序算法
template<class T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[j] > arr[max])
			{
				max = j;
			}
		}
		if (max != i)
		{
			mySwap(arr[i], arr[max]);
		}
	}
}

// 提供打印数组的模板
template <class T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01()
{
	// 测试char数组
	char charArr[] = "badcfe";
	int num = sizeof(charArr) / sizeof(charArr[0]);
	mySort(charArr, num);
	printArray(charArr, num);
}



void test02()
{
	// 测试int数组
	int intArr[] = { 5, 6, 3, 4, 2, 7 };
	int num = sizeof(intArr) / sizeof(intArr[0]);
	mySort(intArr, num);
	printArray(intArr, num);
}



int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}