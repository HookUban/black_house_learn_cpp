#include "workerManager.h"


WorkerManager::WorkerManager()
{

	// 1.�ļ�������
	ifstream ifs;
	ifs.open(FILENAME,ios::in);
	if (!ifs.is_open())

	{
		cout << "�ļ�������" << endl;
		// ��ʼ������
		// ��ʼ����¼����
		this->m_EmpNum = 0;
		// ��ʼ������ָ��
		this->m_EmpArray = NULL;
		// ��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	// 2���ļ����ڣ�����Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		// �ļ�Ϊ��
		cout << "�ļ�Ϊ��" << endl;
		this->m_EmpNum = 0;
		// ��ʼ������ָ��
		this->m_EmpArray = NULL;
		// ��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		ifs.close();
		return; 
	}

	

}




// չʾ�˵�
void WorkerManager::Show_Menu()
{
	
	cout << "*****************************************" << endl;
	cout << "********  ��ӭʹ��ְ������ϵͳ  *********" << endl;
	cout << "**********  0. �˳��������   ***********" << endl;
	cout << "**********  1.  ����ְ����Ϣ  ***********" << endl;
	cout << "**********  2. ��ʾְ����Ϣ   ***********" << endl;
	cout << "**********  3.  ɾ����ְԱ��  ***********" << endl;
	cout << "**********  4.  �޸�ְ����Ϣ  ***********" << endl;
	cout << "**********  5.  ����ְ����Ϣ  ***********" << endl;
	cout << "**********  6.  ���ձ������  ***********" << endl;
	cout << "**********  7.  ��������ĵ�  ***********" << endl;
	cout << "*****************************************" << endl;
	cout << endl;
}

// �˳�ϵͳ
void WorkerManager::ExitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

// ���ְ��
void WorkerManager::Add_Emp()
{
	cout << "���������ְ����������" << endl;
	int addNum = 0; // �����û�����������
	cin >> addNum;

	if (addNum > 0)
	{
		// ���
		// ��������¿ռ�Ĵ�С
		int newSize = this->m_EmpNum + addNum;	// �¿ռ��С = ԭ����¼���� + ��������

		// �����¿ռ�
		Worker** newSpace = new Worker * [newSize];
		// ��ԭ���Ŀռ��µ����ݣ��������¿ռ���
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{ 
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		// �������������
		for (int i = 0; i < addNum; i++)
		{
			int id; // ְ�����
			string name; // ְ������
			int dSelect; // ����ѡ��

			cout << "�������" << i + 1 << "��ְ����ţ�" << endl;
			cin >> id;

			cout << "�������" << i + 1 << "��ְ��������" << endl;
			cin >> name;
			cout << "��ѡ��ְ�����ţ�" << endl;
			cout << "1.��ְͨ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cin >> dSelect;

			Worker* worker = NULL;

			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;

			}

			// ��������ְ��ָ�룬����������
			newSpace[this->m_EmpNum + i] = worker;

		}

		// �ͷ�ԭ�еĿռ�
		delete[] this->m_EmpArray;
		// �����¿ռ��ָ��
		this->m_EmpArray = newSpace;
		// ������ְ������
		this->m_EmpNum = newSize;
		// ��ʾ��ӳɹ�
		cout << "�ɹ����" << addNum << "��ְ��" << endl; 
		this->save(); // ���浽�ļ���
		// ����ְ����Ϊ�ձ�־
		this->m_FileIsEmpty = false;

	}
	else
	{
		cout << "������������" << endl;
	}

	// ��������������ص��ϼ�Ŀ¼
	system("pause");
	system("cls");
}

void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out); // ������ķ�ʽ���ļ� -- д�ļ�

	// ��ÿ���˵�����д���ļ���
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}
	// �ر��ļ�
	ofs.close();


}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;	
		this->m_EmpArray = NULL;
	}
}


