/*

#include <windows.h>
#include <iostream>
#include <ctime>
using namespace std;
#include <string>

*/
/*
 *
 * wosh注释
 *
 * *//*

//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//
//    cout<<"hello, world"<<endl;
//
//    system("pause");
//    return 0;
//}

*/
/*
int main()
{
    SetConsoleOutputCP(CP_UTF8);

//    int a = 10;
//
//    cout<<"a = "<<a<<endl;

*//*

*/
/*
 * #define 宏常量
 * const 修饰一个变量，常量不能修改
 *
 *
 * *//*
*/
/*

    const int a = 10;
    int const b = 10;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;



    system("pause");
}*//*


*/
/*
* 数据类型
*
*
*
* *//*


int main() {

    SetConsoleOutputCP(CP_UTF8);
    //
    //  int a = 10;
    //  cout<<"a = "<<a<<endl;
//    short num1 = 10;
//    int num2 = 10;
//    long num3 = 10;
//    long long num4 = 10;
//  cout<<"num1 = "<<num1<<endl;

//    cout<<"short "<<sizeof(short)<<endl;
//    cout<<"int "<<sizeof(int)<<endl;
//    cout<<"long "<<sizeof(long)<<endl;
//    cout<<"long long "<<sizeof(long long)<<endl;
//    cout<<"char "<<sizeof(char)<<endl;
//    cout<<"float "<<sizeof(float)<<endl;
//    cout<<"double "<<sizeof(double)<<endl;
//
//    float f1 = 3.14f;
//    cout<<"f1 = "<<f1<<endl;
//
//    double d1 = 2.24;
//    cout << "d1 = "<<d1<<endl;
//    // 科学计数法
//    float f2 = 3.1415926e-2;
//    cout << "f2 = "<<f2<<endl;

//    char ch = 'a';
//    cout << "ch = "<<ch<<endl;
//    cout << "ch = "<<(int)ch<<endl;
//    cout << "ch = " << (int)'A' << endl;

//    int i = 0;
//    for (i = 0; i < 128; i++)
//    {
//        cout << (char)i << " " << i << endl;
//    }
//
//
//    for (int i = 0; i < 40; i++)
//    {
//        cout << '\a' << endl;
//        Sleep(1000);
//    }
//
*/
/*
    // c风格
    char arr[] = "hello, world";
    cout << arr << endl;
    // cpp风格 包含一个头文件<string.h>
    string str = "hello, world";
    cout << str << endl;
    cout << string("hello, world") << endl;
*//*

//    bool flag = true;
//    bool tmp = false;
//    cout << "flag = " << flag << endl;
//    cout << "tmp = " << tmp << endl;
//    cout << "sizeof (bool) "<<sizeof(bool) <<endl;

    // 整型
//    int a = 10;
//    cout << "请输入一个整数:";
//    cin>>a;
//    cout << " a " << a << endl;
//    float num2 = 0.1f;
//    cout << "请输入一个浮点数:";
//    cin >> num2;
//    cout << "num2 = " << num2 << endl;

//    string str = "hello, world";
//    cout << "请输入一个字符串：";
//    cin >> str;
//    cout << "str " << str << endl;

//    int i = 0;
//    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//    for ( i=0; i < 12; i++)
//    {
//        arr[i] = 0;     // arr[11] === int i
//        cout << arr[i] << " " << endl;
//    }

//    int a = 70;
//    int b = 80;
//    cout << (a>b ? a:b)<<endl;

//    int pig1 = 0;
//    int pig2 = 0;
//    int pig3 = 0;
//    int m_pig = 0;
//

//    cout << "请输入第一只猪的体重：";
//    cin >> pig1;
//    cout << "请输入第二只猪的体重：";
//    cin >> pig2;
//    cout << "请输入第三只猪的体重：";
//    cin >> pig3;
//    m_pig = pig1 > pig2 ? pig1: pig2;
//    m_pig = m_pig > pig3 ? m_pig : pig3;
//
//    cout << "最大体重的猪是：" << m_pig << endl;
//
//    int pigs[3] = {0,0,0};
//    int m_pig = 0;
//
//    for (int i = 0; i < 3; i++)
//    {
//        cout << "请输入第" << i+1 << "只猪的体重：";
//        cin >> pigs[i];
//        m_pig = pigs[i] > m_pig ? pigs[i] : m_pig;
//    }
//
//    cout << "最大体重的猪是：" << m_pig << endl;
//
//
//    int input = 0;
//
//    cout << "请给电影打分（1-10）：";
//    cin >> input;
//
//    while (input)
//    {
//        cout << "请给电影打分（1-10）：";
//        cin >> input;
//        while (input < 0 || input > 10)
//        {
//            cout << "请重新输入：";
//            cin >> input;
//        }
//        switch (input)
//        {
//            case 10:
//                cout<<"优秀"<<endl;
//                break;
//            case 9:
//                cout<<"良好"<<endl;
//                break;
//            case 6:
//                cout<<"及格"<<endl;
//                break;
//            case 0:
//                cout << "结束"<<endl;
//                break;
//            default:
//                cout<<"不及格"<<endl;
//                break;
//        }
//    }
//    int i = 0;
//    while (i < 10)
//    {
//        cout << i << endl;
//        i++;
//    }
//
//    while (i < 10)
//    {
//        cout << i++ << endl;
//    }
//
*/
/*

    //猜数字游戏
    int num = 0;
    int count = 5;
    string str;
    srand((unsigned int)time(NULL));
//    cout << rand() << endl;
    int random = rand() % 100 + 1;
//    cout << "random "<< random<<endl;
    while (1)
    {
        cout<< "你有" << count-- << "次机会";
        cout<< "如果5次之类没有猜错，游戏结束";
        cout << "请输入数字1-100：";
        cin >> num;
        if (num > random)
        {
            cout << "猜大了" << endl;
        }
        else if (num < random)
        {
            cout << "猜小了" << endl;
        }
        else if(num == random)
        {
            cout << "猜对了" << endl;
            break;
        }
        if (count <= 0)
        {
            cout<<'\a';
            cout<< "由于规定次数内没有猜对，您的电脑将在10秒内关机！！！"<<endl;
            system("shutdown -s -t 10");
            cout << "输入我是一只猪将取消关机";
            cin >> str;
            if (str == "我是一只猪")
            {
                system("shutdown -a");
            }
            else
            {
                system("shutdown -a");
            }
        }

    }
*//*




    system("pause");

}

*/
/*


int main()
{
    SetConsoleOutputCP(CP_UTF8);

//    int i ;
//    int j ;
//    for (i = 1; i <= 9; i++)
//    {
//        for(j = 1; j <= i; j++)
//        {
//            cout<<j<<"*"<<i<<"="<<i*j<<"\t";
//        }
//        cout<<endl;
//    }
    cout<<"1"<<endl;
    cout<<"2"<<endl;
    cout<<"3"<<endl;
    cout<<"4"<<endl;
    goto label;

    cout<<"5"<<endl;
    cout<<"6"<<endl;
    label:
    cout<<"7"<<endl;


}*/


#include <iostream>
#include <windows.h>

using namespace std;

