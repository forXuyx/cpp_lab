#include <iostream>

using namespace std;

class Person
{
    private:
    string name;
    int no;
    public:
    Person()
    {
        cout << "构造" << endl;
    }
    Person(string a, int b)
    {
        name = a;
        no = b;
        cout << "赋值" << endl;
    }
    ~Person()
    {
        cout << "析构" << endl;
    }
};

int main()
{
    Person *p = new Person("xyx", 12);
    delete p;
    return 0;
}