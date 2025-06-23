#include <iostream>
#include <windows.h>
#include <string>
using namespace std;


#define MAX 1000

enum Option
{
    ADD = 1,
    SHOW = 2,
    DEL = 3,
    FIND = 4,
    MODIFY = 5,
    CLEAR = 6,
    EXIT = 0,
};

// 设计联系人的结构体
struct Person
{
    string m_Name;
    int m_Sex;
    int m_Age;
    string m_Phone;
    string m_Addr;
};

// 设计通讯录的结构体
struct Addressbooks
{
    Person personArray[MAX];
    int m_Size;

};



void addPerson(Addressbooks *abs)
{
    if (abs->m_Size == MAX)
    {
        cout << "通讯录已满，无法添加联系人!"<<endl;
        return ;
    }
    else
    {
        string name;
        cout << "请输入联系人姓名：" << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;

        int sex;
        while(true)
        {
            cout << "请输入联系人性别：1.男 2.女" << endl;
            cin >> sex;
            if (sex != 1 && sex != 2)
            {
                cout << "输入的性别有误，请重新输入" << endl;
            }
            abs->personArray[abs->m_Size].m_Sex = sex;
            break;
        }

        int age;
        cout << "请输入联系人年龄：" << endl;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;

        string phone;
        cout << "请输入联系人电话:" << endl;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;

        string addr;
        cout << "请输入联系人地址:" << endl;
        cin >> addr;
        abs->personArray[abs->m_Size].m_Addr = addr;

        abs->m_Size++;

        cout << "添加联系人成功" << endl;
        system("pause");
        system("cls");

    }
}

void showPerson(Addressbooks *abs)
{
    if (abs->m_Size == 0)
    {
        cout << "通讯录中记录为空" << endl;
    }
    else
    {
        for (int i = 0; i < abs->m_Size; i++)
        {
            cout << "姓名：" << abs->personArray[i].m_Name << "\t";
            cout << "性别：" <<( (abs->personArray[i].m_Sex == 1) ? "男" : "女") << "\t";
            cout << "年龄：" << abs->personArray[i].m_Age << "\t";
            cout << "电话：" << abs->personArray[i].m_Phone << "\t";
            cout << "地址：" << abs->personArray[i].m_Addr << endl;
        }
    }

    system("pause");
    system("cls");
}

// 检测联系人是否存在
int isExist(Addressbooks* abs, string name)
{
    for (int i = 0; i < abs->m_Size; i++)
    {
        if (abs->personArray[i].m_Name == name)
        {
            return i;
        }

    }
    return -1;
}


// 删除指定联系人
void deletePerson(Addressbooks* abs)
{
    cout << "请输入您要删除的联系人姓名：" << endl;
    string name;
    cin >> name;

    int ret = isExist(abs, name);
    if (ret != -1)
    {
        for (int i = ret; i < abs->m_Size - 1; i++)
        {
            abs->personArray[i] = abs->personArray[i + 1];
        }
        abs->m_Size--;
        cout << "删除成功";
    }
    else
    {
        cout << "没有此联系人" << endl;
    }
    system("pause");
    system("cls");


}

void findPerson(Addressbooks* abs)
{
    cout << "请输入您要查找的姓名：" << endl;
    string name;
    cin >> name;

    int ret = isExist(abs, name);
    if (ret != -1)
    {
        cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
        cout << "性别：" <<( (abs->personArray[ret].m_Sex == 1) ? "男" : "女") << "\t";
        cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
        cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
        cout << "地址：" << abs->personArray[ret].m_Addr << endl;
    }
    else
    {
        cout << "没有此联系人" << endl;
    }
    system("pause");
    system("cls");
}


void modifyPerson(Addressbooks* abs)
{
    cout << "请输入您要修改的联系人姓名：" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs, name);
    if (ret != -1)
    {
        string name;
        cout << "请输入联系人姓名：" << endl;
        cin >> name;
        abs->personArray[ret].m_Name = name;
        int sex;
        while(true)
        {
            cout << "请输入联系人性别：1.男 2.女" << endl;
            cin >> sex;
            if (sex != 1 && sex != 2)
            {
                cout << "输入的性别有误，请重新输入" << endl;
            }
            abs->personArray[ret].m_Sex = sex;
            break;
        }

        int age;
        cout << "请输入联系人年龄："<< endl;
        cin >> age;
        abs->personArray[ret].m_Age = age;

        string phone;
        cout << "请输入联系人电话：" << endl;
        cin >> phone;
        abs->personArray[ret].m_Phone = phone;

        string addr;
        cout << "请输入联系人地址：" << endl;
        cin >> addr;
        abs->personArray[ret].m_Addr = addr;
        cout << "修改联系人成功" << endl;
    }
    else
    {
        cout << "查无此人" << endl;
    }
    system("pause");
    system("cls");
}

void clearPerson(Addressbooks* abs)
{
    abs->m_Size = 0;
    cout << "清空成功" << endl;
    system("pause");
    system("cls");
}

// 菜单界面
void showMenu()
{
    cout << "********************************" << endl;
    cout << "*******  1. 添加联系人   ********" << endl;
    cout << "*******  2. 显示联系人   ********" << endl;
    cout << "*******  3. 删除联系人   ********" << endl;
    cout << "*******  4. 查找联系人   ********" << endl;
    cout << "*******  5. 修改联系人   ********" << endl;
    cout << "*******  6. 清空联系人   ********" << endl;
    cout << "*******  0. 退出通讯录   ********" << endl;
    cout << "********************************" << endl;

}



int main() {
    SetConsoleOutputCP(CP_UTF8);

    Addressbooks abs;
    abs.m_Size = 0;


    int select = 0;

    while (true)
    {
    showMenu();
    cin >> select;

    switch (select)
    {
        case ADD:
            addPerson(&abs);
            break;
        case SHOW:
            showPerson(&abs);
            break;
        case DEL:
        {
            deletePerson(&abs);

            break;
        }
        case FIND:
            findPerson(&abs);
            break;
        case MODIFY:
            modifyPerson(&abs);
            break;
        case CLEAR:

            clearPerson(&abs);
            break;
        case EXIT:
            cout << "欢迎下次使用" << endl;
            system("pause");
            return 0;
        default:
            break;

    }
    }


    system("pause");
    return 0;
}
