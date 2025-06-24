
#include <iostream>

using namespace std;

/*
 * 友元
 *
 * 生活中家里有客厅（Public）和卧室（Private）
 * 客厅所有客人都允许进入，但是卧室是私有的
 * 但是也可以允许好朋友进去
 *
 * 在程序里，有些私有属性想让类外特殊的一些函数或者类进行访问，需要用到友元的技术
 *
 * 友元的目的就是让一个函数或者类访问另一个类中的私有属性
 * 友元的关键字：
 *  friend
 *
 *  友元的三种实现：
 *      全局函数做友元
 *      类做友元
 *      成员函数做友元
 *
 *
 * */
/*

class Building
{
    // goodGay全局函数是Building好朋友，可以访问Building中的私有成员
    friend void goodGay(Building *building);
public:
    Building()
    {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }

public:
    string m_SittingRoom;  // 客厅

private:
    string m_BedRoom;
};


// 全局函数
void goodGay(Building *building)
{
    cout << "好基友的全局函数正在访问:"<<building->m_SittingRoom << endl;
    cout << "好基友的全局函数正在访问:"<<building->m_BedRoom << endl;//加入了friend 关键字后，可以访问
}

void test01()
{

    Building building;
    goodGay(&building);
}

int main()
{
    test01();

    return 0;
}*/


/*
// 类做友元
class Building
{
    // GoodGay类是Building的好朋友，可以访问本类中的私有成员
    friend class GoodGay;
public:
    Building();

public:
    string m_SittingRoom;

private:
    string m_BedRoom;

};

// 类外写成员函数
Building::Building()
{
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}

class GoodGay
{
public:
    GoodGay();
    void visit(); // 参观函数 访问Building中的属性
    Building* building;
};

GoodGay::GoodGay()
{
    building = new Building();
}


void GoodGay:: visit()
{
    cout<< "好基友类正在访问:" << building->m_SittingRoom << endl;
    cout<< "好基友类正在访问:" << building->m_BedRoom << endl;
}

void test01()
{
    GoodGay gg;
    gg.visit();
}

int main()
{
    test01();

    return 0;
}*/


// 成员函数做友元


class Building;
class GoodGay
{
public:
    GoodGay();
    void visit();   // 让visit函数可以访问Building中的私有属性
    void visit2();  // 让visit2函数不可以访问Building中的私有属性

    Building* building;
};

class Building
{
    friend void GoodGay::visit();

public:
    Building();
public:
    string m_SittingRoom;

private:
    string m_BedRoom;
};

Building::Building()
{
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}


GoodGay::GoodGay()
{
    building = new Building();
}

void GoodGay::visit()
{
    cout<< "visit 函数正在访问:" << building->m_SittingRoom << endl;
    cout<< "visit 函数正在访问:" << building->m_BedRoom << endl;
}
void GoodGay::visit2()
{
    cout<< "visit2 函数正在访问:" << building->m_SittingRoom << endl;
}

int main()
{
    GoodGay gg;
    gg.visit();
    gg.visit2();
    return 0;
}