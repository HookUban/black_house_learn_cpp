#pragma once
#include <iostream>
using namespace std;
#include "globalFile.h"
#include <fstream>
#include <map>
#include <string>



class OrderFile
{
public:
	// 构造函数
	OrderFile();

	// 更新预约记录
	void updateOrder();

	// 记录预约条数
	int m_Size;

	// 记录所有预约信息容器
	map<int, map<string, string>> m_orderData;
};