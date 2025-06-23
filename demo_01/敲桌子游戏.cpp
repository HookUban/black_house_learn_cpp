

#include <iostream>
#include <windows.h>
using namespace std;


int is_7(int n)
{
    if (n % 7 == 0 || n % 10 == 7 || n / 10 == 7)
    {
        return 1;
    }
    return 0;
}

int main()
{
    // 特殊数字
    // 7的倍数，个位有7，十位有7,...

    for (int i = 1; i <= 100; i++)
    {
        if(is_7(i))
        {
            cout<< i << "\t敲桌子" << endl;
        }
    }


    return 0;
}