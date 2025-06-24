

#include <iostream>
using namespace std;


// C++中空指针也是可以调用成员函数的，但是要注意有么有用到this指针
// 如果用到this指针，需要加以判断保证代码的健壮性

// 空指针调用成员函数

class Person
{
public:
    void showClassName()
    {
        cout << "this is Person class" << endl;

    }
    void showPersonAge()
    {
        if (this == NULL)
        {
            return ;
        }
        cout << "age = " << this->m_Age << endl;
    }

    int m_Age;
};

void test01()
{
    Person* p = NULL;
    p->showClassName();
    p->showPersonAge(); // error 报错原因是传入的指针是NULL

}

int main()
{

    test01();

    return 0;
}