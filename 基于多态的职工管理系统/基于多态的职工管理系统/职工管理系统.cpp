#include <iostream>
using namespace std;



/**

�����ฺ����������£�
	���û��Ĺ�ͨ�˵�����
	��ְ����ɾ�Ĳ�Ĳ���
	���ļ��Ķ�д����

*/

#include "workerManager.h"
#include "worker.h"
#include "employee.h"


int main()
{
	// ���Դ���
	Worker* worker = new Employee(1, "����", 1);
	worker->showInfo();


	//// ʵ���������߶���
	//WorkerManager wm;

	//int choice = 0; // �û�ѡ��

	//while (true)
	//{
	//	// ����չʾ�˵��ĳ�Ա����
	//	wm.Show_Menu();
	//	cout << "����������ѡ��:" << endl;
	//	cin >> choice;

	//	switch (choice)
	//	{
	//	case 0: // �˳�ϵͳ
	//		wm.ExitSystem();
	//		break;

	//	case 1:	// ����ְ��
	//		break;

	//	case 2: // ��ʾְ��
	//		break;
	//	case 3: // ɾ��ְ��
	//		break;
	//	case 4: // �޸�ְ��
	//		break;
	//	case 5: // ����ְ��
	//		break;
	//	case 6: // ����ְ��
	//		break;
	//	case 7: // ����ĵ�
	//		break;
	//	default:
	//		system("cls");

	//	}
	//}


	system("pause");
	return 0;
}


