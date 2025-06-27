#pragma once
#include <iostream>
using namespace std;




template <class T>
class MyArray
{
public:
	// ���캯��
	MyArray(int capacity)
	{
		//cout << "MyArray���вι���ĵ���" << endl;

		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
	// ��������
	MyArray(const MyArray& arr)
	{
		//cout << "MyArray�Ŀ�������ĵ���" << endl;

		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		// ���
		this->pAddress = new T[arr.m_Capacity];
		// ��arr�е����ݶ���������
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator=��ֹǳ��������
	MyArray& operator=(const MyArray& arr)
	{
		//cout << "MyArray��operator=�ĵ���" << endl;

		// ���ж�ԭ�������Ƿ������ݣ���������ͷ�

		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		// ���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		this->pAddress = new T[arr.m_Capacity];

		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];

		}
		return *this;
	}

	 // ��������
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			//cout << "MyArray�������ĵ���" << endl;
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}
private:
	T* pAddress; // ָ��ָ��������ٵ���������
	int m_Capacity; // ��������
	int m_Size;		// �����С
};

