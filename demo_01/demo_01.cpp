/*


#include <iostream>
#include <windows.h>

using namespace std;


//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//
//    int num = 0;
//    do
//    {
//        cout<<num<<endl;
//        num++;
//    }
//    while(num < 10);
//
//    system("pause");
//}


int main()
{
    SetConsoleOutputCP(CP_UTF8);

//    for (int i = 0; i < 10; i++)
//    {
//        cout<<i<<endl;
//    }


    int i = 0;
    int j = 0;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    system("pause");
}*/

#include <iostream>
#include <windows.h>
using namespace std;

//int main()
//{
//
////    int arr[] = {1, 2, 3, 4, 5};
//    int arr[] = {1, 2, 3, 4, 5, 6};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int left = 0;
//    int right = sz - 1;
//    for (int i = 0; i < sz; i++)
//    {
//        while(left < right)
//        {
//            int temp = arr[left];
//            arr[left] = arr[right];
//            arr[right] = temp;
//            left++;
//            right--;
//        }
//    }
//    for (int i = 0; i < sz; i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//}

void bubbleSort(int* arr, int sz)
{

    for (int i = 0; i < sz - 1; i++)
    {
        bool flag = 0;
        for (int j = 0; j < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = 1;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (!flag)
        {
            break;
        }
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int arr[] = {2, 3, 1, 5, 2, 4};

    bubbleSort(arr, sizeof(arr) / sizeof(arr[0]));

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout<<arr[i]<<" ";
    }
}