

#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;


bool my_fun(int n)
{

    // 369
    int a = 0;
    int sum = 0;
    int tmp = n;

    while(n > 0)
    {
        a = n%10;
        n = n/10;
        sum += pow(a, 3);
    }
    return sum == tmp;

}

int main()
{


    SetConsoleOutputCP(CP_UTF8);

//    for (int i = 100; i <= 999; i++)
//    {
//        if(my_fun(i))
//        {
//            cout << i << endl;
//        }
//
//    }
    for (int i = 100; i <= 999; i++)
    {
        bool ret = my_fun(i);
        if (ret)
        {
            cout <<i<< "是水仙花数" << endl;
        }
        else
        {
//            cout << "不是水仙花数" << endl;
        }
    }
    system("pause");
}
