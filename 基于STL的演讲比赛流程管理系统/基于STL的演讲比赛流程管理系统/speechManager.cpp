#include "speechManager.h"

// ���캯��
SpeechManager::SpeechManager()
{

}

// �˵�����
void SpeechManager::show_Menu()
{
	cout << "*****************************************" << endl;
	cout << "*********    ��ӭ�μ��ݽ�����  **********" << endl;
	cout << "*********    1.��ʼ�ݽ�����    **********" << endl;
	cout << "*********    3.��ձ�����¼    **********" << endl;
	cout << "*********    0.�˳���������    **********" << endl;
	cout << "********************;********************" << endl;
	cout << endl;
}	

void SpeechManager::exitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

// ��������
SpeechManager::~SpeechManager()
{

}
