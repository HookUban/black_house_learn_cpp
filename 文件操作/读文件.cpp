
#include <iostream>
using namespace std;
#include <fstream>
#include <string>
/*
 * 读文件与写文件步骤相似，但是读读取方式相对于比较多
 * 读文件步骤如下：
 *      1.包含头文件
 *      #include <fstream>
 *
 *      2.创建流对象
 *      ifstream ifs;
 *
 *      3.打开文件并判断文件时候打开成功
 *      ifs.open("文件路径", 打开方式);
 *
 *      4.读数据
 *      四种方式读取
 *      5.关闭文件
 *      ifs.close();
 *
 *
 *
 * */

// 文本文件 读文件
void test01()
{
    // 包含头文件
    // 创建流对象
    ifstream ifs;
    // 打开文件 并且判断是否打开成功
    ifs.open("test.txt", ios::in);
    if (!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
    }
    // 读数据
    // 第一种
//    char buf[1024] = {0};
//    while (ifs>>buf)
//    {
//        cout << buf<< endl;
//    }
    // 第二种
//    char buf[1024] = {0};
//    while (ifs.getline(buf, sizeof(buf)))
//    {
//        cout << buf << endl;
//    }
    // 第三种
//    string buf;
//    while (getline(ifs, buf))
//    {
//        cout << buf << endl;
//    }
    // 第四种
    char c;
    while ( (c = ifs.get()) != EOF)
    {
        cout << c;
    }
    // 关闭文件
    ifs.close();

}


int main()
{
    test01();

    return 0;
}