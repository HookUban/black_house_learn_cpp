
#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base的构造函数" << endl;
    }

    ~Base()
    {
        cout <<"Base的析构函数" << endl;
    }

};

class Son:public Base
{
public:
    Son()
    {
        cout <<"Son的构造函数"<< endl;
    }
    ~Son()
    {
        cout <<"Son的析构函数"<<endl;
    }
};

void test01()
{
//    Base b;
// 继承中的构造和顺序如下：
// 先构造父类，在构造子类，析构的顺序和构造的顺序相反

    Son s;
}

int main()
{
    test01();

    return 0;
}

