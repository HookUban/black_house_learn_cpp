
#include <iostream>
using namespace std;

class AbstractDrinking
{
public:
    //1.煮水
    virtual void Boil() = 0;
    //2.冲泡
    virtual void Brew() = 0;
    //3.倒入杯中
    virtual void PourInCup() = 0;
    //4.加入辅料
    virtual void AddSomething() = 0;
    // 制作饮品
    void makeDrink()
    {
        Boil();
        Brew();
        PourInCup();
        AddSomething();
    }
};

// 制作coffe
class Coffee:public AbstractDrinking
{
    //1.煮水
    virtual void Boil()
    {
        cout << "煮农夫山泉" << endl;
    }
    //2.冲泡
    virtual void Brew()
    {
        cout <<"冲泡咖啡" << endl;
    }
    //3.倒入杯中
    virtual void PourInCup()
    {
        cout << "倒入杯中" << endl;
    }


    //4.加入辅料
    virtual void AddSomething()
    {
        cout << "加入糖,牛奶" << endl;
    }
};


// 制作coffe
class Tea:public AbstractDrinking
{
    //1.煮水
    virtual void Boil()
    {
        cout << "煮矿泉水" << endl;
    }
    //2.冲泡
    virtual void Brew()
    {
        cout <<"冲泡茶叶" << endl;
    }
    //3.倒入杯中
    virtual void PourInCup()
    {
        cout << "倒入杯中" << endl;
    }


    //4.加入辅料
    virtual void AddSomething()
    {
        cout << "加入枸杞" << endl;
    }
};



void doWork(AbstractDrinking* abs)
{
    abs->makeDrink();
    delete abs;
}

void test01()
{
    doWork(new Coffee);
    cout << "------------------" << endl;
    doWork(new Tea);

}

int main()
{
    test01();
    return 0;
}