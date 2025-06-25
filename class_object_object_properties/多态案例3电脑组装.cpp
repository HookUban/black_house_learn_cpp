
#include <iostream>
using namespace std;


/*
 * 电脑组装部件为CPU（用于计算），显卡（用于显示），内存条（用于存储）
 * 将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如Intel厂商和Lenovo厂商
 * 创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口
 * 测试时组装三台不同的电脑进行工作
 *
 *
 * */


// 抽象出不同的零件类
// 抽象CPU类
class CPU
{
public:
    virtual void calculate() = 0;
};

// 抽象VideoCard类
class VideoCard
{
public:
    virtual void display() = 0;
};


// 抽象VideoCard类
class Memory
{
public:
    virtual void strorage() = 0;
};


// 电脑类
class Computer
{
public:
    Computer(CPU* cpu, VideoCard* vc, Memory* mem)
    {
        m_cpu = cpu;
        m_vc = vc;
        m_mem = mem;
    }

    void work()
    {
        m_cpu->calculate();
        m_vc->display();
        m_mem->strorage();
    }
private:
    CPU* m_cpu;
    VideoCard* m_vc;
    Memory* m_mem;

};



// 具体厂商
class IntelCPU:public CPU
{
public:
    virtual void calculate()
    {
        cout << "Intel的CPU开始计算了" << endl;

    }
};

class IntelVideoCard:public VideoCard
{
public:
    virtual void display()
    {
        cout << "Intel的显卡开始显示了" << endl;

    }
};
class IntelMemory:public Memory
{
public:
    virtual void storage()
    {
        cout << "Intel内存条开始存储" << endl;

    }
};


class LenovoCPU:public CPU
{
public:
    virtual void calculate()
    {
        cout << "Lenovo的CPU开始计算了" << endl;

    }
};
class LenovoVideoCard:public VideoCard
{
public:
    virtual void display()
    {
        cout << "Lenovo的显卡开始显示了" << endl;

    }
};
class LenovoMemory:public Memory
{
public:
    virtual void storage()
    {
        cout << "Lenovo内存条开始存储" << endl;

    }
};


void test01()
{

}
int main()
{

    return 0;
}

