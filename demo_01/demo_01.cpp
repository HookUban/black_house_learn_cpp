

#include <iostream>
#include <windows.h>

using namespace std;


int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int num = 0;
    do
    {
        cout<<num<<endl;
        num++;
    }
    while(num < 10);

    system("pause");
}