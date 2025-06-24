
#include <iostream>

using namespace std;


// 浅拷贝：简单的赋值操作
// 深拷贝：在堆区重新申请空间，进行拷贝操作

class Person
{
public:
    Person()
    {
        cout << "Person()无参构造" << endl;
    }

    Person(int age, int height)
    {
        m_age = age;
        m_Height = new int(height);
        cout << "Person(int age)有参构造" << endl;

    }

    // 自己事项的拷贝构造函数，解决浅拷贝带来的问题
    Person(const Person& p)
    {
        cout << "Person(const Person& p)拷贝构造函数" <<this<< endl;
        m_age = p.m_age;
        // m_Height = p.m_Height; // 编译器默认实现的就是这行代码
        // 深拷贝操作
        m_Height = new int(*p.m_Height);
    }

    ~Person()
    {
        if (m_Height != NULL)
        {
            delete m_Height;
            m_Height = NULL;
        }
        cout << "~Person()析构函数" << this<< endl;
    }

    int m_age;
    int* m_Height;
};

void test01()
{
    Person p1(18, 160);
    cout << "p1.age:" << p1.m_age << "p1.height:" << *p1.m_Height << endl;

    Person p2(p1);
    cout << "p2.age:" << p1.m_age << "p2.height:" << *p2.m_Height << endl;
    // 浅拷贝带来的问题就是堆区的内存重复释放
    // 浅拷贝的问题要利用深拷贝来解决
}

int main()
{
    test01();
    return 0;
}

