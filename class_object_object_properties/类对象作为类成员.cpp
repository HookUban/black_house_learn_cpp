

#include <iostream>
#include <string>

using namespace std;

// 类对象作为类成员

class Phone
{
public:
    Phone(string name)
    {
        m_PName = name;
        cout << m_PName << "手机创建成功" << endl;
    }
    string m_PName;
};

class Person {
public:
    Person(string name, string pname):m_Name(name), m_Phone(pname)
    {
        cout << m_Name << "创建成功" << endl;
    }
    string m_Name;
    Phone m_Phone;
};

// 当其他类对象作为本类对象， 构造的时候先构造类对象，在构造自身，析构的顺序
void test01()
{
    Person p("张三", "iphone");

    cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
}

int main()
{

    test01();

    return 0;
}