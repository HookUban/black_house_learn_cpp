#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include "speaker.h"


class SpeechManager
{
public:
	// ���캯��
	SpeechManager();
	// �˵�
	void show_Menu();
	// �˳�ϵͳ
	void exitSystem();
	// ��������
	~SpeechManager();

	// ��ʼ������������
	void initSpeech();

	// ��Ա����
	// �����һ�ֱ���ѡ�ֱ������
	vector<int> v1;
	// ��һ�ֽ���ѡ�ֱ������
	vector<int> v2;

	// ʤ��ǰ����ѡ�ֱ������
	vector<int> vVictory;

	// ��ű���Լ���Ӧ�ľ���ѡ������
	map<int, Speaker>m_Speaker;

	 // ��ű�������
	int m_Index;

};