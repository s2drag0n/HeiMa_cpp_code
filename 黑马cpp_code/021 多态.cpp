#include<iostream>
using namespace std;
/*
* 
* 多态
* 
* 静态多态：函数重载、运算符重载、复用函数名
* 动态多态：派生类和虚函数实现运行时多态
* 
* 静态多态：函数地址早绑定--编译阶段
* 动态多态：函数地址晚绑定--运行阶段
* 
* Cat cat;
* Animal& animal = cat;
* cat.doSpeak()
* 使用Animal类型接收Cat对象时，使用的函数是Animal中定义的---地址早绑定
* 如果想执行猫的函数需要使用地址晚绑定，需要将父类Animal中的doSpeak()函数前加一个virtual，将其变成虚函数
* ++规定，当一个成员函数被声明为虚函数后，其派生类中的同名函数都自动成为虚函数。
* 因此，在子类从新声明该虚函数时，可以加，也可以不加，但习惯上每一层声明函数时都加virtual,使程序更加清晰。
* 
* 动态多态满足条件：
*   1.有继承关系
*   2.子类重写（返回值类型 函数名 参数列表 完全相同）父类的虚函数、
* 
* 动态多态使用：父类的指针或者引用指向子类对象
* 
* 多态原理剖析
* 未加virtual时，Animal大小为1，加了virtual变成了8（一个指针大小）
* Animal类：vfptr虚函数指针->指向vftable虚函数表，表内记录着虚函数的地址&Animal::doSpeak()
* Cat类继承自Animal类：vfptr虚函数指针->指向vftable虚函数表，表内记录着虚函数的地址&Animal::doSpeak()
* 但此时如果子类重写了父类的虚函数，则子类中的虚函数表内部记录会替换成子类的虚函数地址
* 当父类的指针或者引用指向子类对象时发生多态
* 
* 纯虚函数和抽象类
* 语法：virtual  返回值类型 函数名(参数列表) = 0;
* 当类中有了纯虚函数，这个类就叫抽象类
* 
* 抽象类无法实例化对象
* 抽象类的子类必须重写抽象类中的纯虚函数，否则也属于抽象类
* 
* 虚析构和纯虚析构
* 问题：多态使用时，如果子类有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码，造成内存泄露
* 解决方法：将父类中析构函数改为虚析构或者纯虚析构
* 虚析构和纯虚析构共性
*   1.都可以解决父类指针释放子类对象
*   2.都需要有具体的函数实现：纯虚析构需要在类外实现 Animal::~Animal(){cout<<"Animal的春熙析构函数调用"<<endl;}
* 区别：如果是纯虚析构，则该类属于抽象类，无法实例化
*/
class Animal {
public:
    virtual void doSpeak() {
        cout << "动物在说话" << endl;
    }
};

class Cat:public Animal {
public:
    virtual void doSpeak() {
        cout << "猫在说话" << endl;
    }
};

void test02() {
    Cat cat;
    Animal& animal = cat;
    cat.doSpeak();
    cout << "sizeof Animal = " << sizeof(Animal) << endl;
    cout << "sizeof Cat = " << sizeof(Cat) << endl;
}

int main() {
    test02();
    return 0;
    //案例：实现计算器
    //案例：制作饮品
}