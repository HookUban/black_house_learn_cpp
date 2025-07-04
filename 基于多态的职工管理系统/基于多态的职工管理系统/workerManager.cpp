#include "workerManager.h"


WorkerManager::WorkerManager()
{

	// 1.文件不存在
	ifstream ifs;
	ifs.open(FILENAME,ios::in);
	if (!ifs.is_open())

	{
		cout << "文件不存在" << endl;
		// 初始化属性
		// 初始化记录人数
		this->m_EmpNum = 0;
		// 初始化数组指针
		this->m_EmpArray = NULL;
		// 初始化文件是否为空
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	// 2、文件存在，数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		// 文件为空
		cout << "文件为空" << endl;
		this->m_EmpNum = 0;
		// 初始化数组指针
		this->m_EmpArray = NULL;
		// 初始化文件是否为空
		this->m_FileIsEmpty = true;
		ifs.close();
		return; 
	}

	// 3.文件存在，并且记录数据
	int num = this->get_EmpNum();
	cout << "职工人数为：" << num << endl;
	this->m_EmpNum = num;

	// 开辟空间
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	// 将文件中的数据，存到数组中
	this->init_Emp();

	// 测试代码
	//for (int i = 0; i < this->m_EmpNum; i++)
	//{
	//			cout << "职工编号：" << this->m_EmpArray[i]->m_Id
	//		<< " 姓名：" << this->m_EmpArray[i]->m_Name
	//				<< " 部门编号：" << this->m_EmpArray[i]->m_DeptId << endl;
	//}


}




// 展示菜单
void WorkerManager::Show_Menu()
{
	
	cout << "*****************************************" << endl;
	cout << "********  欢迎使用职工管理系统  *********" << endl;
	cout << "**********  0. 退出管理程序   ***********" << endl;
	cout << "**********  1.  增加职工信息  ***********" << endl;
	cout << "**********  2.  显示职工信息  ***********" << endl;
	cout << "**********  3.  删除离职员工  ***********" << endl;
	cout << "**********  4.  修改职工信息  ***********" << endl;
	cout << "**********  5.  查找职工信息  ***********" << endl;
	cout << "**********  6.  按照编号排序  ***********" << endl;
	cout << "**********  7.  清空所有文档  ***********" << endl;
	cout << "*****************************************" << endl;
	cout << endl;
}

// 退出系统
void WorkerManager::ExitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

// 添加职工
void WorkerManager::Add_Emp()
{
	cout << "请输入添加职工的数量：" << endl;
	int addNum = 0; // 保存用户的输入数量
	cin >> addNum;

	if (addNum > 0)
	{
		// 添加
		// 计算添加新空间的大小
		int newSize = this->m_EmpNum + addNum;	// 新空间大小 = 原来记录人数 + 新增人数

		// 开辟新空间
		Worker** newSpace = new Worker * [newSize];
		// 将原来的空间下的数据，拷贝到新空间下
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{ 
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		// 批量添加新数据
		for (int i = 0; i < addNum; i++)
		{
			int id; // 职工编号
			string name; // 职工姓名
			int dSelect; // 部门选择
			int flag = 0; // 用于判断职工编号是否存在

			while (!flag)
			{
				cout << "请输入第" << i + 1 << "个职工编号：" << endl;
				cin >> id;
				if(this->IsExist(id) != -1)
				{
					cout << "职工编号已存在，请重新输入" << endl;
					flag = 0; // 编号存在，继续循环
				}
				else
				{
					flag = 1; // 编号不存在，跳出循环
				}
			}


			cout << "请输入第" << i + 1 << "个职工姓名：" << endl;
			cin >> name;
			cout << "请选择职工部门：" << endl;
			cout << "1.普通职工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
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

			// 将创建的职工指针，放入数组中
			newSpace[this->m_EmpNum + i] = worker;

		}

// 释放原有的空间
delete[] this->m_EmpArray;
// 更改新空间的指向
this->m_EmpArray = newSpace;
// 更新新职工人数
this->m_EmpNum = newSize;
// 提示添加成功
cout << "成功添加" << addNum << "名职工" << endl;
this->save(); // 保存到文件中
// 更新职工不为空标志
this->m_FileIsEmpty = false;

	}
	else
	{
		cout << "输入数据有误" << endl;
	}

	// 按任意键，清屏回到上级目录
	system("pause");
	system("cls");
}

void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out); // 用输出的方式打开文件 -- 写文件

	// 将每个人的数据写入文件中
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}
	// 关闭文件
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
		// 统计人数
		num++;
	}

	return num;
}

// 初始化职工
void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;
	int index = 0; // 用于记录职工数组的下标
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
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			// 利用多态调用程序接口
			this->m_EmpArray[i]->showInfo();
		}
	}
	// 按任意键清屏
	system("pause"); 
	system("cls");

}

// 删除职工
void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;

	}
	else
	{
		// 按照职工的编号删除
		cout << "请输入要删除的职工编号：" << endl;
		int id = -1;
		cin >> id;

		int index = this->IsExist(id); // 判断职工是否存在
		if (index != -1)
		{
			// 职工存在,并且要删除index上的职工
			// 数据前移
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;// 更新数组中职工人数
			// 数据同步更新到文件
			this->save();
			cout << "删除成功" << endl;


		}
		else
		{
			cout << "删除失败，职工不存在" << endl;
		}

	}

	// 按任意键清屏
	system("pause");
	system("cls");
}

// 判断职工是否存在函数，如果存在返回职工所在数组中的位置，不存在返回-1
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
	return index; // 如果不存在，返回-1
}

// 修改职工
void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;

	}
	else
	{
		cout << "请输入修改职工的编号：" << endl;
		int id;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret != -1)
		{
			// 查找到编号的职工
			delete this->m_EmpArray[ret]; // 释放原有的职工对象

			int newId; // 新的职工编号
			string newName;
			int dSelect;
			cout << "查到：" << id << "号职工，请输入新职工编号:" << endl;
			cin >> newId;
			cout << "请输入新的姓名" << endl;
			cin >> newName;

			cout << "请选择新的岗位" << endl;

			cout << "1.普通职工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;

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
			// 更新数组
			this->m_EmpArray[ret] = worker;

			cout << "修改成功" << endl;

			// 保存到文件中
			this->save();

		}
		else
		{
			cout << "修改失败，职工不存在" << endl;
		}

	}
	system("pause");
	system("cls");
}

// 查找职工
void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者记录为空" << endl;

	}
	else
	{
		cout << "请输入查找方式" << endl;
		cout << "1.按照职工编号查找" << endl;
		cout << "2.按照职工姓名查找" << endl;

		int select = 0;
		cin >> select;	
		
		if (select == 1)
		{
			// 按照编号查
			int id;
			cout << "请输入查找的职工的编号:" << endl;
			cin >> id;
			int ret = this->IsExist(id);
			if (ret != -1)
			{
				cout << "查找成功，职工信息如下：" << endl;
				this->m_EmpArray[ret]->showInfo();

			}
			else
			{
				cout << "查找失败，职工不存在" << endl;
			}

		}
		else if (select == 2)
		{
			// 按照姓名查
			string name;
			bool flag = false;
			cout << "请输入查找的职工姓名:" << endl;
			cin >> name;
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "查找成功，职工信息如下：" 
						<< this->m_EmpArray[i]->m_Id
						<<endl;
					this->m_EmpArray[i]->showInfo();
					flag = true; // 找到职工

				}
			}
			if (!flag)
			{
				cout << "查找失败，职工不存在" << endl;
			}
		}
		else
		{
			cout << "输入有误，请重新输入" << endl;
		}
	}

	// 按任意键清屏
	system("pause");
	system("cls");


}
// 按照编号排序
void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;

		system("pause");
		system("cls");
	}
	else
	{

		cout << "请选择排序方式：" << endl;
		cout << "1.按照职工号升序" << endl;
		cout << "2.按照职工号降序" << endl;
		int select = 0;
		cin >> select;

		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i; // 声明最小值或者最大值下标
			
			for (int j = i + 1; j < m_EmpNum; j++)
			{
				if (select == 1) // 升序
				{
					if (this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
				else  // 降序
				{
					if (this->m_EmpArray[minOrMax]->m_Id < this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}

			}
			// 判断一开始认定的 最小值或最大值是不是计算的最小是或最大值，如果不是，交换数据
			if (i != minOrMax)
			{
				Worker* temp = this->m_EmpArray[i];
				m_EmpArray[i] = this->m_EmpArray[minOrMax];
				m_EmpArray[minOrMax] = temp;
			}
		}

		cout << "排序成功" << endl;

		this->save(); // 保存到文件中
		this->Show_Emp(); // 显示职工信息

	}
}

// 清空文件
void WorkerManager::Clean_File()
{
	cout << "确认清空文件吗？" << endl;
	cout << "1.确认清空" << endl;
	cout << "2.取消清空" << endl;
	int select = 0;
	cin >> select;

	if (select == 1)
	{
		// 清空文件
		ofstream ofs(FILENAME, ios::trunc); // 删除文件后重新创建
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			// 删除堆区的每个职工对象
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
				m_EmpArray[i] = NULL; // 释放职工对象
			}
			// 删除堆区数组指针
			delete[] this->m_EmpArray;

			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;

		}

		cout << "清空成功" << endl;
	}

	system("pause");
	system("cls");
}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;	
		this->m_EmpArray = NULL;
	}
}


