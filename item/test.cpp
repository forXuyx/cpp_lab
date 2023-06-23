//////////////
////////////// Created by 52318 on 2023/6/23.
//////////////
////////////#include "iostream"
////////////
////////////using namespace std;
////////////
////////////class Animal
////////////{
////////////public:
////////////    int m_Age;
////////////};
////////////
////////////class Sheep :virtual public Animal
////////////{
////////////
////////////};
////////////
////////////class Tuo :virtual public Animal
////////////{
////////////
////////////};
////////////
////////////class SheepTuo :public Sheep, public Tuo
////////////{
////////////
////////////};
////////////
////////////int main()
////////////{
////////////    SheepTuo st;
////////////
////////////    st.m_Age = 18;
////////////
////////////    return 0;
////////////}
//////////
//////////#include "iostream"
//////////
//////////using namespace std;
//////////
//////////class Animal
//////////{
//////////public:
//////////    virtual void speak()
//////////    {
//////////        cout << "speak" << endl;
//////////    }
//////////};
//////////
//////////class Cat :public Animal
//////////{
//////////public:
//////////    virtual void speak()
//////////    {
//////////        cout << "cat speak" << endl;
//////////    }
//////////};
//////////
//////////void doSpeack(Animal &animal)
//////////{
//////////    animal.speak();
//////////}
//////////
//////////void test()
//////////{
//////////    Cat cat;
//////////    doSpeack(cat);
//////////
//////////    Animal & animal = cat;
//////////    doSpeack(animal);
//////////}
//////////
//////////int main()
//////////{
//////////    test();
//////////
//////////    return 0;
//////////}
////////#include "iostream"
////////#include "string"
////////
////////using namespace std;
////////
////////class AbstractCalculator
////////{
////////public:
////////
////////    int m_Num1;
////////    int m_Num2;
////////
////////    virtual int getResult()
////////    {
////////        return 0;
////////    }
////////};
////////
////////class AddCalculator :public AbstractCalculator
////////{
////////public:
////////
////////    int getResult()
////////    {
////////        return m_Num1 + m_Num2;
////////    }
////////};
////////
////////class SubCalculator :public AbstractCalculator
////////{
////////public:
////////
////////    int getResult()
////////    {
////////        return m_Num1 - m_Num2;
////////    }
////////};
////////
////////class MulCalculator :public AbstractCalculator
////////{
////////public:
////////
////////    int getResult()
////////    {
////////        return m_Num1 * m_Num2;
////////    }
////////};
////////
////////class DivCalculator :public AbstractCalculator
////////{
////////public:
////////
////////    int getResult()
////////    {
////////        return m_Num1 / m_Num2;
////////    }
////////};
////////
////////void test()
////////{
////////    AbstractCalculator * abc = new AddCalculator;
////////    abc->m_Num1 = 10;
////////    abc->m_Num2 = 20;
////////
////////    cout << abc->getResult() << endl;
////////
////////    delete abc;
////////}
////////
////////int main()
////////{
////////    test();
////////
////////    return 0;
////////}
//////#include "iostream"
//////
//////using namespace std;
//////
//////class Base{
//////public:
//////    virtual void func() = 0;
//////};
//////
//////class Son :public Base
//////{
//////public:
//////    void func()
//////    {
//////        cout << "Son" << endl;
//////    }
//////};
//////
//////void test()
//////{
//////    Son son;
//////    son.func();
//////    Base * base = new Son;
//////    base->func();
//////}
//////
//////int main()
//////{
//////    test();
//////    return 0;
//////}
////
////#include "iostream"
////
////using namespace std;
////
////class AbstractDrinking
////{
////public:
////    virtual void Boil() = 0;
////
////    virtual void Brew() = 0;
////
////    virtual void PourInCup() = 0;
////
////    virtual void PutSomething() = 0;
////
////    void MakeDrink()
////    {
////        Boil();
////        Brew();
////        PourInCup();
////        PutSomething();
////    }
////};
////
////class Coffee :public AbstractDrinking
////{
////public:
////    virtual void Boil()
////    {
////        cout << "boil water" << endl;
////    }
////
////    virtual void Brew()
////    {
////        cout << "brew coffee" << endl;
////    }
////
////    virtual void PourInCup()
////    {
////        cout << "pour in coffee cup" << endl;
////    }
////
////    virtual void PutSomething()
////    {
////        cout << "put milk and suger" << endl;
////    }
////};
////
////class Tea :public AbstractDrinking
////{
////public:
////    virtual void Boil()
////    {
////        cout << "boil water" << endl;
////    }
////
////    virtual void Brew()
////    {
////        cout << "brew tea" << endl;
////    }
////
////    virtual void PourInCup()
////    {
////        cout << "pour in tea cup" << endl;
////    }
////
////    virtual void PutSomething()
////    {
////        cout << "put gouqi" << endl;
////    }
////};
////
////void doWork(AbstractDrinking * abs)
////{
////    abs->MakeDrink();
////
////    delete abs;
////}
////
////void test01()
////{
////    doWork(new Coffee);
////
////    cout << "---------" << endl;
////
////    doWork(new Tea);
////}
////
////int main()
////{
////    test01();
////    return 0;
////}
//
//#include "iostream"
//#include "string"
//
//using namespace std;
//
//class Animal
//{
//public:
//
//    virtual void speak() = 0;
//};
//
//class Cat :public Animal
//{
//public:
//    virtual void speak()
//    {
//        cout << *m_Name << " cat speak" << endl;
//    }
//
//    Cat(string name)
//    {
//        m_Name = new string(name);
//    }
//
//    ~Cat()
//    {
//        if (m_Name != NULL)
//        {
//            delete m_Name;
//            m_Name = NULL;
//        }
//    }
//
//    string * m_Name;
//};
//
//void testo1()
//{
//    Animal * animal = new Cat("Tom");
//    animal->speak();
//}
//
//int main()
//{
//    testo1();
//    return 0;
//}

#include "iostream"

using namespace std;

class CPU
{
public:
    virtual void calculate() = 0;
};

class GPU
{
public:
    virtual void display() = 0;
};

class  Memory
{
public:
    virtual void storage() = 0;
};

class Computer
{
public:
    Computer(CPU * cpu, GPU * gpu, Memory * memory)
    {
        this->cpu = cpu;
        this->gpu = gpu;
        this->memory = memory;
    }

    void work()
    {
        cpu->calculate();

        gpu->display();

        memory->storage();
    }

    ~Computer()
    {
        if (cpu != NULL)
        {
            delete cpu;
            cpu = NULL;
        }

        if (gpu != NULL)
        {
            delete gpu;
            gpu = NULL;
        }

        if (memory != NULL)
        {
            delete memory;
            memory = NULL;
        }
    }

private:
    CPU * cpu;
    GPU * gpu;
    Memory * memory;
};

class IntelCPU :public CPU
{
public:
    virtual void calculate()
    {
        cout << "intel cpu calculate" << endl;
    }
};

class IntelGPU :public GPU
{
public:
    virtual void display()
    {
        cout << "intel gpu display" << endl;
    }
};

class IntelMemory :public Memory
{
public:
    virtual void storage()
    {
        cout << "intel memory" << endl;
    }
};

class NvdiaCPU :public CPU
{
public:
    virtual void calculate()
    {
        cout << "Nvdia cpu calculate" << endl;
    }
};

class NvdiaGPU :public GPU
{
public:
    virtual void display()
    {
        cout << "Nvdia gpu display" << endl;
    }
};

class NvdiaMemory :public Memory
{
public:
    virtual void storage()
    {
        cout << "Nvdia memory" << endl;
    }
};

void test01()
{
    CPU * intelCpu = new IntelCPU;
    GPU * intelGpu = new IntelGPU;
    Memory * intelMemory = new IntelMemory;

    Computer * computer1 = new Computer(intelCpu, intelGpu, intelMemory);
    computer1->work();
    delete computer1;
}

int main()
{
    test01();

    return 0;
}