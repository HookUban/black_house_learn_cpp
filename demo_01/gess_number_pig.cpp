#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <windows.h>
#include <string>

using namespace std;



void open_notepad() {
    // 使用C++写入UTF-8文本文件
    ofstream file("temp.txt");
    if (file.is_open()) {
        file << "你是一只猪hhhhhhh\n";  // 确保文件以UTF-8编码保存
        file.close();
    }

    system("notepad temp.txt");
    system("del temp.txt");
}


int main()
{

    SetConsoleOutputCP(CP_UTF8);
    srand((unsigned int)time(NULL));
    const int MAX_ATTEMPTS = 5;
    int num, random = rand() % 100 + 1;
    int attempts = MAX_ATTEMPTS;
    string input;

    while (attempts > 0)
    {
        cout << "\n剩余次数："<<attempts<<"/"<<MAX_ATTEMPTS;
        cout << "\n请输入数字（1-100）:";

        cin >> num;
        if (num < 1 || num > 100)
        {
            cout << "输入的数字超出范围！" << endl;
            cout << "请重新输入：";
        }

        if (num > random)
        {
            cout << "猜大了\n";
        }
        else if(num < random)
        {
            cout << "猜小了\n";
        }
        else
        {
            cout << "恭喜你，猜对了！\n";
            return 0;
        }
        attempts--;
    }
    cout << "\n\a次数用尽！数字是 "<<random<<endl;
    cout << "作为惩罚，您的电脑将在10内关机！！！！！\n";

//    system("shutdown -s -t 10");

    cout<<"输入我是一只猪取消关机\n:";
    cin>>input;
    if (input == "我是一只猪")
    {
        system("shutdown -a");
        open_notepad();
        cout<<"已取消关机！\n";
    }
    else
    {
        cout<<"输入错误！三秒后立即关机...\n";
        Sleep(3000);
        open_notepad();
        system("shutdown -a");

        cout<<"再见...\n";
    }

}