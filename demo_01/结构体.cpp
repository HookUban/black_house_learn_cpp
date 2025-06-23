
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;


//struct Student
//{
//    string name;
//    int age;
//    int score;
//} s3;

//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//     Student s1;
//    s1.name = "张三";
//    s1.age = 19;
//    s1.score = 100;
//
//    Student s2 = {"张三", 19, 100};
//
//    cout<<"姓名："<<s1.name<<" 年龄："<<s1.age<<" 分数："<<s1.score<<endl;
//    cout<<"姓名："<<s2.name<<" 年龄："<<s2.age<<" 分数："<<s2.score<<endl;
//    cout<<"姓名："<<s3.name<<" 年龄："<<s3.age<<" 分数："<<s3.score<<endl;
//
//}

//struct Student
//{
//    string name;
//    int age;
//    int score;
//};


struct Student
{
    string name;
    int age;
    int score;
};

struct Teacher
{
    string name;
    int age;
    struct Student stu;

};

//void print_struct(struct Student s)
//{
//    cout<<"姓名："<<s.name<<" 年龄："<<s.age<<" 分数："<<s.score<<endl;
//}

void print_s(const struct Student* s)
{
    cout<<"姓名："<<s->name<<" 年龄："<<s->age<<" 分数："<<s->score<<endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);

//    struct Student arr[] =
//            {
//            {"张三", 18, 100},
//             {"李四", 19, 90},
//             {"王五", 20, 80}
//            };
//    struct Student s1 = {"张三", 18, 100};
//    struct Student* p = &s1;
//    cout<<"姓名："<<p->name<<" 年龄："<<p->age<<" 分数："<<p->score<<endl;
//    struct Student stu = {"张三", 18, 100};
//    struct Teacher t1 = {"zhangsan", 19, stu};
//    cout<<"姓名："<<t1.name<<" 年龄："<<t1.age<<" 分数："<<t1.stu.score<<endl;
    struct Student s1 = {"张三", 18, 100};
    print_s(&s1);

}