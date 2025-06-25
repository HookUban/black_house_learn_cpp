
#include <iostream>

using namespace std;



class Animal
{
public:
    int m_Age;
};


// 利用虚继承，解决菱形继承问题
// 继承之前，加上关键字virtual 变为虚继承
// Animal类称为虚基类

class Sheep:virtual public Animal
{

};

class Tuo:virtual public  Animal
{

};

class SheepTuo:public Sheep, public Tuo
{

};
void test01()
{
    SheepTuo st;
    st.Sheep::m_Age = 10;
    st.Tuo::m_Age = 20;
    cout << sizeof(st) << endl;
    cout << "st.Sheep::m_Age = "<< st.Sheep::m_Age << endl;
    cout << "st.Tuo::m_Age = "<< st.Tuo::m_Age << endl;


}


int main()
{

    test01();
    return 0;
}