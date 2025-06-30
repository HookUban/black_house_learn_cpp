#include "speechManager.h"

// ���캯��
SpeechManager::SpeechManager()
{
	// ��ʼ������������
	this->initSpeech();
	// ����12��ѡ��
	this->createSpeaker();
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

// �˳�ϵͳ
void SpeechManager::exitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}


// ��ʼ������������
void SpeechManager::initSpeech()
{
	// �������ÿ�
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();
	// ��ʼ����������
	this->m_Index = 1;

}

// ����12��ѡ��
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		Speaker sp;
		sp.m_Name = name;
		for (int j = 0; j < 2; j++)
		{
			sp.m_Score[j] = 0;
		}
		// ����ѡ�ֱ�ţ����ҷ���v1������
		this->v1.push_back(i + 10001);
		// ѡ�ֱ���Լ���Ӧѡ�ַ��뵽map������

		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}
}

// ��������
SpeechManager::~SpeechManager()
{

}
