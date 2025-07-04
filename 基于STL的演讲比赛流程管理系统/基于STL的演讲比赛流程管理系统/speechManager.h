#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include "speaker.h"
#include <algorithm>
#include <deque>
#include <numeric>
#include <fstream>

class SpeechManager
{
public:
	// 构造函数
	SpeechManager();
	// 菜单
	void show_Menu();
	// 退出系统
	void exitSystem();
	// 析构函数
	~SpeechManager();

	// 初始化容器和属性
	void initSpeech();

	// 创建12名选手
	void createSpeaker();

	// 开始比赛 比赛整个流程控制函数
	void startSpeech();

	// 抽签
	void speechDraw();

	// 比赛
	void speechContest();

	// 显示分数
	void showScore();

	// 保存分数
	void saveRecord();

	// 读取记录
	void loadRecord();
	// 判断文件是否为空
	bool fileIsEmpty;
	// 存放往届记录容器
	map<int, vector<string>>m_Record;

	// 显示往届记录
	void showRecord();

	// 清空文件
	void clearRecord();




	// 成员属性
	// 保存第一轮比赛选手编号容器
	vector<int> v1;
	// 第一轮晋级选手编号容器
	vector<int> v2;

	// 胜出前三名选手编号容器
	vector<int> vVictory;

	// 存放编号以及对应的具体选手容器
	map<int, Speaker>m_Speaker;


	 // 存放比赛轮数
	int m_Index;

};