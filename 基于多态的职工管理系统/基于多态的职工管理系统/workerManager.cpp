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

	// 3.�ļ����ڣ����Ҽ�¼����
	int num = this->get_EmpNum();
	cout << "ְ������Ϊ��" << num << endl;
	this->m_EmpNum = num;

	// ���ٿռ�
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	// ���ļ��е����ݣ��浽������
	this->init_Emp();

	// ���Դ���
	//for (int i = 0; i < this->m_EmpNum; i++)
	//{
	//			cout << "ְ����ţ�" << this->m_EmpArray[i]->m_Id
	//		<< " ������" << this->m_EmpArray[i]->m_Name
	//				<< " ���ű�ţ�" << this->m_EmpArray[i]->m_DeptId << endl;
	//}


}




// չʾ�˵�
void WorkerManager::Show_Menu()
{
	
	cout << "*****************************************" << endl;
	cout << "********  ��ӭʹ��ְ������ϵͳ  *********" << endl;
	cout << "**********  0. �˳��������   ***********" << endl;
	cout << "**********  1.  ����ְ����Ϣ  ***********" << endl;
	cout << "**********  2.  ��ʾְ����Ϣ  ***********" << endl;
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
			int flag = 0; // �����ж�ְ������Ƿ����

			while (!flag)
			{
				cout << "�������" << i + 1 << "��ְ����ţ�" << endl;
				cin >> id;
				if(this->IsExist(id) != -1)
				{
					cout << "ְ������Ѵ��ڣ�����������" << endl;
					flag = 0; // ��Ŵ��ڣ�����ѭ��
				}
				else
				{
					flag = 1; // ��Ų����ڣ�����ѭ��
				}
			}


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

int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		// ͳ������
		num++;
	}

	return num;
}

// ��ʼ��ְ��
void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;
	int index = 0; // ���ڼ�¼ְ��������±�
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker* worker = NULL;
		if (dId == 1)
		{
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2)
		{
			worker = new Manager(id, name, dId);
		}
		else if (dId == 3)
		{
			worker = new Boss(id, name, dId);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}
	ifs.close();
}

void WorkerManager::Show_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			// ���ö�̬���ó���ӿ�
			this->m_EmpArray[i]->showInfo();
		}
	}
	// �����������
	system("pause"); 
	system("cls");

}

// ɾ��ְ��
void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;

	}
	else
	{
		// ����ְ���ı��ɾ��
		cout << "������Ҫɾ����ְ����ţ�" << endl;
		int id = -1;
		cin >> id;

		int index = this->IsExist(id); // �ж�ְ���Ƿ����
		if (index != -1)
		{
			// ְ������,����Ҫɾ��index�ϵ�ְ��
			// ����ǰ��
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;// ����������ְ������
			// ����ͬ�����µ��ļ�
			this->save();
			cout << "ɾ���ɹ�" << endl;


		}
		else
		{
			cout << "ɾ��ʧ�ܣ�ְ��������" << endl;
		}

	}

	// �����������
	system("pause");
	system("cls");
}

// �ж�ְ���Ƿ���ں�����������ڷ���ְ�����������е�λ�ã������ڷ���-1
int WorkerManager::IsExist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			return i;
		}

	}
	return index; // ��������ڣ�����-1
}

// �޸�ְ��
void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;

	}
	else
	{
		cout << "�������޸�ְ���ı�ţ�" << endl;
		int id;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret != -1)
		{
			// ���ҵ���ŵ�ְ��
			delete this->m_EmpArray[ret]; // �ͷ�ԭ�е�ְ������

			int newId; // �µ�ְ�����
			string newName;
			int dSelect;
			cout << "�鵽��" << id << "��ְ������������ְ�����:" << endl;
			cin >> newId;
			cout << "�������µ�����" << endl;
			cin >> newName;

			cout << "��ѡ���µĸ�λ" << endl;

			cout << "1.��ְͨ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;

			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(newId, newName, 1);
				break;
			case 2:
				worker = new Manager(newId, newName, 2);
				break;
			case 3:
				worker = new Boss(newId, newName, 3);
				break;
			default:
				break; 
			}
			// ��������
			this->m_EmpArray[ret] = worker;

			cout << "�޸ĳɹ�" << endl;

			// ���浽�ļ���
			this->save();

		}
		else
		{
			cout << "�޸�ʧ�ܣ�ְ��������" << endl;
		}

	}
	system("pause");
	system("cls");
}

// ����ְ��
void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;

	}
	else
	{
		cout << "��������ҷ�ʽ" << endl;
		cout << "1.����ְ����Ų���" << endl;
		cout << "2.����ְ����������" << endl;

		int select = 0;
		cin >> select;	
		
		if (select == 1)
		{
			// ���ձ�Ų�
			int id;
			cout << "��������ҵ�ְ���ı��:" << endl;
			cin >> id;
			int ret = this->IsExist(id);
			if (ret != -1)
			{
				cout << "���ҳɹ���ְ����Ϣ���£�" << endl;
				this->m_EmpArray[ret]->showInfo();

			}
			else
			{
				cout << "����ʧ�ܣ�ְ��������" << endl;
			}

		}
		else if (select == 2)
		{
			// ����������
			string name;
			bool flag = false;
			cout << "��������ҵ�ְ������:" << endl;
			cin >> name;
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "���ҳɹ���ְ����Ϣ���£�" 
						<< this->m_EmpArray[i]->m_Id
						<<endl;
					this->m_EmpArray[i]->showInfo();
					flag = true; // �ҵ�ְ��

				}
			}
			if (!flag)
			{
				cout << "����ʧ�ܣ�ְ��������" << endl;
			}
		}
		else
		{
			cout << "������������������" << endl;
		}
	}

	// �����������
	system("pause");
	system("cls");


}
// ���ձ������
void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;

		system("pause");
		system("cls");
	}
	else
	{

		cout << "��ѡ������ʽ��" << endl;
		cout << "1.����ְ��������" << endl;
		cout << "2.����ְ���Ž���" << endl;
		int select = 0;
		cin >> select;

		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i; // ������Сֵ�������ֵ�±�
			
			for (int j = i + 1; j < m_EmpNum; j++)
			{
				if (select == 1) // ����
				{
					if (this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
				else  // ����
				{
					if (this->m_EmpArray[minOrMax]->m_Id < this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}

			}
			// �ж�һ��ʼ�϶��� ��Сֵ�����ֵ�ǲ��Ǽ������С�ǻ����ֵ��������ǣ���������
			if (i != minOrMax)
			{
				Worker* temp = this->m_EmpArray[i];
				m_EmpArray[i] = this->m_EmpArray[minOrMax];
				m_EmpArray[minOrMax] = temp;
			}
		}

		cout << "����ɹ�" << endl;

		this->save(); // ���浽�ļ���
		this->Show_Emp(); // ��ʾְ����Ϣ

	}
}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;	
		this->m_EmpArray = NULL;
	}
}


