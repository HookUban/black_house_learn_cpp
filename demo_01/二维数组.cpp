/*

#include <iostream>
#include <windows.h>

using namespace std;



int main() {
    SetConsoleOutputCP(CP_UTF8);

//    int arr[2][3];
//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            cout<<"请输入第"<<i+1<<"行第"<<j+1<<"列的值：";
//            cin>>arr[i][j];
//            cout<<"第"<<i+1<<"行第"<<j+1<<"列的值为："<<arr[i][j]<<endl;
//        }
//    }


//    int arr[2][3] = {
////            {1,2,3},
////            {4,5,6}
////    };
////    for (int i = 0; i < 2; i++)
////    {
////        for (int j = 0; j < 3; j++)
////        {
////            cout<<arr[i][j]<<" ";
////        }
////        cout<<endl;
////    }

//    int arr[2][3] = {1, 2, 3,4, 5, 6};
//    for (int i = 0 ; i < 2; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//
//    int row = sizeof(arr)/sizeof(arr[0]);
//    cout<<row<<endl;
//    int col = sizeof(arr[0]) / sizeof(arr[0][0]);
//    cout<<col<<endl;


    // 二维数组的名臣用途
    // 可以查看占用内存空间大小
    // 可以查看二维数组首地址

//    int arr[2][3] =
//            {
//                    {1, 2, 3},
//                    {4, 5, 6}
//            };
//    cout<<sizeof(arr)<<endl;
//
//    cout<<arr<<endl;
//    cout<<&arr<<endl;
//    cout<<&arr[0]<<endl;
//    cout<<&arr[0][0]<<endl;
//
//    cout<<arr+1<<endl;
//    cout<<&arr+1<<endl;
//    cout<<&arr[0]+1<<endl;
//
//    int scores[3][3] = {
//            {1, 2, 3},
//            {4, 5, 6},
//            {7, 8, 9}
//    };
//
//    for (int i = 0 ; i < 3; i++)
//    {
//        int sum = 0;
//        for (int j = 0; j < 3; j++)
//        {
//            sum += scores[i][j];
//        }
//        cout<<"第"<<i+1<<"行和为："<<sum<<endl;
//    }


}



*/


#include <iostream>
#include <windows.h>
#include <assert.h>

using namespace std;
//
//void swap(int* pa, int* pb)
//{
//    assert(pa);
//    assert(pb);
//
//    int tmp = *pa;
//    *pa = *pb;
//    *pb = tmp;
//}
//
//void swap1(int& a, int& b)
//{
//    int tmp = a;
//    a = b;
//    b = tmp;
//}
//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//
//    int a = 0;
//    int b = 1;
//    cout<<"a = "<<a<<" b = "<<b<<endl;
////    swap(a, b);
//    swap1(a, b);
//    cout<<"a = "<<a<<" b = "<<b<<endl;
//
//}
//
//int my_max(int a, int b);
//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    int a = 10;
//    int b = 20;
//
//    cout<<my_max(a, b)<<endl;
//
//}
//
//int my_max(int a, int b)
//{
//    return a>b ? a:b;
//}


void my_swap (int& a, int& b);

void my_swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int a = 10;
    int b = 20;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    my_swap(a, b);
    cout<<"a = "<<a<<" b = "<<b<<endl;
}