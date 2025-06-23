/*

#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;



struct Student
{
    string sName;
    int score;
};

struct Teacher
{
    string tName;
    struct Student sArray[5];
};

void allocateSpace(struct Teacher tArray[], int len)
{
    string nameSeed = "ABCDE";
    for(int i = 0; i < len; i++)
    {
        tArray[i].tName = "Teacher_";
        tArray[i].tName += nameSeed[i];

        for (int j = 0; j < 5; j++)
        {
            tArray[i].sArray[j].sName = "Student_";
            tArray[i].sArray[j].sName += nameSeed[j];
            int random = rand() % 61 + 40;
            tArray[i].sArray[j].score = random;
        }

    }
}

void printInfo(struct Teacher tArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout<<" 老师姓名: "<<tArray[i].tName<<endl;

        for (int j = 0; j < 5; j++)
        {
            cout << "\t学生姓名： "<< tArray[i].sArray[j].sName<<
            " 考试分数:" <<tArray[i].sArray[j].score<<endl;
        }
    }
}


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    srand(unsigned(time(NULL)));
    // 创建3名老师的数组
    // 通过函数给3名老师的信息赋值，以及学生赋值
    struct Teacher tArray[3];

    int len = sizeof(tArray) / sizeof(tArray[0]);
    allocateSpace(tArray, len);

    printInfo(tArray, len);

}*/



#include <iostream>
#include <windows.h>

using namespace std;

struct Hero
{
    string name;
    int age;
    string sex;
};


void bubbleSort(struct Hero heroArray[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (heroArray[j].age > heroArray[j+1].age)
            {
                struct Hero tmp = heroArray[j];
                heroArray[j] = heroArray[j+1];
                heroArray[j+1] = tmp;
            }
        }
    }
}


void printHero(struct Hero heroArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
            cout<<"姓名："<<heroArray[i].name<<"\t年龄："<<heroArray[i].age<<"\t性别："<<heroArray[i].sex<<endl;
    }

}


int main()
{

    SetConsoleOutputCP(CP_UTF8);

    struct Hero heroArray[5] = {
            {"刘备", 30, "男"},
            {"貂蝉", 19, "女"},
            {"关羽", 20, "男"},
            {"王昭君", 21, "女"},
            {"张飞", 22, "男"}
    };

    int len = sizeof(heroArray) / sizeof(heroArray[0]);
    for ( int i = 0; i < len; i++)
    {
        cout<<"姓名："<<heroArray[i].name<<"\t年龄："<<heroArray[i].age<<"\t性别："<<heroArray[i].sex<<endl;
    }
    cout<<"开始排序"<<endl;
    bubbleSort(heroArray, len);
    printHero(heroArray, len);
}