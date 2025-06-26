#include <iostream>
using namespace std;



// ʵ��һ��ͨ�õĶ������������ĺ���
// ���򣬴Ӵ�С
// �㷨 ѡ��
// ���� char ���� int ����



// ��������ģ��
template <typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}


// �����㷨
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

// �ṩ��ӡ�����ģ��
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
	// ����char����
	char charArr[] = "badcfe";
	int num = sizeof(charArr) / sizeof(charArr[0]);
	mySort(charArr, num);
	printArray(charArr, num);
}



void test02()
{
	// ����int����
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