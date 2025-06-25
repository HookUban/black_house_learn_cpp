
#include <iostream>
using namespace std;
#include <fstream>

// 二进制写文件
class Person
{
public:
    char m_Name[64];
    int m_Age;

};

void test01()
{

    // 包含头文件
    // 创建文件流
    ofstream ofs;
    // 打开文件
    ofs.open("Person.txt", ios::out | ios::binary);
    // 写文件
    Person p = {"张三", 18};
    ofs.write((const char*)&p, sizeof(Person));
    ofs.close();
}


int main()
{

    test01();
    return 0;
}