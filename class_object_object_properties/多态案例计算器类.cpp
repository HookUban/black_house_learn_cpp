
#include <iostream>
using namespace std;

// 分别利用普通的写法和多态技术实现计算器

// 普通写法

class Calculator
{
public:

    int getResult(string oper)
    {
        if (oper == "+")
        {
            return m_Num1 + m_Num2;
        }
        else if(oper == "-")
        {
            return m_Num1 - m_Num2;
        }
        else if(oper == "*")
        {
            return m_Num1 * m_Num2;
        }
        // 如果向扩展新功能，需要修改代码，那么就会违反了开闭原则
    }

    int m_Num1;
    int m_Num2;

};

void test01()
{
    // 创建一个计算器对象
    Calculator c;
    c.m_Num1 = 10;
    c.m_Num2 = 20;
    cout<<c.m_Num1<<"+"<<c.m_Num2<<"="<<c.getResult("+")<<endl;
    cout<<c.m_Num1<<"-"<<c.m_Num2<<"="<<c.getResult("-")<<endl;
    cout<<c.m_Num1<<"*"<<c.m_Num2<<"="<<c.getResult("*")<<endl;

}

// 利用多态实现
// 多态的好处：扩展性高，维护性高，组织结构清晰
// 可读性强，对于前期和后期的扩展和维护都比较容易

class AbstractCalculator
{
public:
    virtual int getResult()
    {
        return 0;
    }

    int m_Num1;
    int m_Num2;
};


// 加法计算器的类
class AddCalculator : public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1 + m_Num2;
    }
};


class SubCalculator:public AbstractCalculator
{
    int getResult()
    {
        return m_Num1 - m_Num2;
    }

};


class MulCalculator:public AbstractCalculator
{
    int getResult()
    {
        return m_Num1 * m_Num2;
    }

};

void test02()
{
    // 多态的使用条件
    // 父类的指针或者引用指向子类对象
    AbstractCalculator* abc = new AddCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 30;

    cout << abc->m_Num1 << "+" << abc->m_Num2 << "="<< abc->getResult() << endl;
    delete abc;
    abc = new SubCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 30;

    cout << abc->m_Num1 << "-" << abc->m_Num2 << "="<< abc->getResult() << endl;
    delete abc;

    abc = new MulCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 30;

    cout << abc->m_Num1 << "-" << abc->m_Num2 << "="<< abc->getResult() << endl;
    delete abc;
}

int main()
{
//    test01();
    test02();
    return 0;
}