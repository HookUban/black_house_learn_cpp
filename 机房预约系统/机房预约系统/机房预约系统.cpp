
#include <iostream>
using namespace std;
#include "Identity.h"
#include <fstream>
#include "globalFile.h"
#include "student.h"
#include "teacher.h"
#include "manager.h"


// ��¼�Ĺ��� ����1 �����ļ����� ����2 �����������
void LoginIn(string fileName, int type)
{
	// ����ָ�룬����ָ���������
	Identity* person = NULL;

	// ���ļ�
	ifstream ifs;
	ifs.open(fileName, ios::in);
	// �ж��ļ��Ƿ����
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	// ׼�������û���Ϣ
	int id = 0;
	string name;
	string pwd;

	// �ж����
	if (type == 1) // ѧ�����
	{
		cout << "���������ѧ�ţ�" << endl;
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "����������ְ����:" << endl;
		cin >> id;
	}

	cout << "�������û�����" << endl;
	cin >> name;
	cout << "���������룺" << endl;
	cin >> pwd;

	if (type == 1)
	{
		// ѧ�������֤
		int fId; // ���ļ��ж�ȡ��id��
		string fName; // ���ļ��л�ȡ������
		string fPwd; // ���ļ��л�ȡ����

		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			cout << fId << endl;
			cout << fName << endl;
			cout << fPwd << endl;

			// ���û��������Ϣ���Ա�
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "ѧ����֤��¼�ɹ���" << endl;
				system("pause");
				system("cls");

				person = new Student(id, name, pwd);
				// ����ѧ����ݵ��Ӳ˵�



				return;
			}
		}
	}
	else if (type == 2)
	{
		// ��ʦ�����֤
	}
	else if (type == 3)
	{
		// ����Ա�����֤
	}
	cout << "��֤��¼ʧ�ܣ�" << endl;
	system("pause");
	system("cls");
	return;
}

int main()
{
	int select = 0;

	while (true)
	{
		cout << "=========================== ��ӭ����С������ԤԼϵͳ =========================== " << endl;
		cout << endl << "�������������" << endl;
		cout << "\t\t ---------------------------\n";
		cout << "\t\t|                           |\n";
		cout << "\t\t|        1.ѧ������         |\n";
		cout << "\t\t|                           |\n";
		cout << "\t\t|        2.��    ʦ         |\n";
		cout << "\t\t|                           |\n";
		cout << "\t\t|        3.�� �� Ա         |\n";
		cout << "\t\t|                           |\n";
		cout << "\t\t|        0.��    ��         |\n";
		cout << "\t\t|                           |\n";
		cout << "\t\t ---------------------------\n";
		cout << "����������ѡ��:";
		
		cin >> select;
		switch (select)
		{
		case 1:	// ѧ�����
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2:	// ��ʦ���
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3:	// ����Ա���
			LoginIn(ADMIN_FILE, 3);
			break;
		case 0:	// �˳�ϵͳ
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "��������������ѡ��" << endl;
			system("pause");
			system("cls");
			break;
		}

	}

	

	system("pause");

	return 0;
}