
#include <iostream>
#include <windows.h>

using namespace std;



int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int i = 0;
    int j = 0;
    for (i = 1; i <= 9; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cout<<j<<"*"<<i<<"="<<i*j<<"\t";
        }
        cout<<endl;
    }

}