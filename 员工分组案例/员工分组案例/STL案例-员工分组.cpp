#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <map>
#include <ctime>


#define CEHUA 0
#define MEISHU 1
#define YANFA 2


/*
- ��˾������Ƹ��10��Ա����ABCDEFGHIJ),10��Ա�����빫˾����Ҫָ��Ա���ڲ��Ź���
- Ա����Ϣ�У�������������ɣ����ŷ�Ϊ���߻����з�
- �����10��Ա�����䲿�ź͹���
- ͨ��multimap������Ϣ�Ĳ��룬key(���ű��) value(Ա��)
- �ֲ�����ʾԱ����Ϣ
*/


class Worker
{
public:


	string m_Name;
	int m_Salary;
};



void createWorker(vector<Worker>& v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name = "Ա��";
		worker.m_Name += nameSeed[i];
		worker.m_Salary = rand() % 10000 + 10000;

		// ��Ա�����뵽������
		v.push_back(worker);
	}
}


// Ա������
void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		// ����һ��������ű��
		int deptId = rand() % 3;
		// ��Ա�����뵽�����У�
		// key���ű�ţ�value����Ա��
		m.insert(make_pair(deptId, *it));

	}
}


void showWorkerByGourp(multimap<int, Worker>& m)
{
	cout << "�߻����ţ�" << endl;
	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;
	}
	cout << "--------------------------" << endl;
	cout << "��������:" << endl;

	pos = m.find(MEISHU);
	count = m.count(MEISHU);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;
	}


	cout << "--------------------------" << endl;
	cout << "�з�����:" << endl;

	pos = m.find(YANFA);
	count = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;
	}

}



int main()
{
	srand((unsigned int)time(NULL));

	// 1.����Ա��
	vector<Worker> vWorker;
	createWorker(vWorker);

	// ����
	for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	{
		cout << "name: " << it->m_Name << " salary: " << it->m_Salary << endl;
	}

	// Ա������
	multimap<int, Worker> mWorker;
	setGroup(vWorker, mWorker);

	// ������ʾԱ��
	showWorkerByGourp(mWorker);

	system("pause");
	return 0;
}