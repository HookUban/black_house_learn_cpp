
#include <iostream>

using namespace std;
#include <fstream>



/*
 * 文件操作
 *      程序运行时产生的数据都属于临时数据，程序一旦运行结束都会被释放
 *      通过文件可以将数据持久化
 *      C++对文件操作需要包含头文件<fstream>
 *
 *      文件类型分为：
 *              文本文件 - 文件以文本的ASCII码形式存储在计算机中
 *              二进制文件 - 文件以文本的二进制形式存储在计算机中，用户一般不能直接读懂它们
 *
 *      操作文件的三大类：
 *              1.ostream类 - 写操作
 *              2.ifstream类 - 读操作
 *              3.fstream类 - 读写操作
 *
 *
 * **/

// 文本文件 写文件

void test01()
{
    // 1.包含头文件fstream
    // 创建流对象
    ofstream ofs;
    ofs.open("test.txt", ios::out);
    ofs << "姓名：张三"<< endl;
    ofs << "性别：男"<< endl;
    ofs << "年龄：18"<< endl;
    ofs.close();
    cout << "文件写入成功" << endl;
}

int main()
{

    test01();
    return 0;
}
/*
 * 总结
 *      文件操作必须包含头文件fstream
 *      读文件可以利用ofstream,或者fstream类
 *      打开文件时需要指定操作文件的路径，以及打开方式
 *      利用<<可向文件中写入数据
 *      操作完毕，要关闭文件
 *
 *
 * */

