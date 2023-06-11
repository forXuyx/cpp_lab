#include <iostream>

using namespace std;

class Person
{
    public:
        string name;
    protected:
        string car;
    private:
        string no;
    public:
        void fun()
        {
            name = "xyx";
            car = "劳斯莱斯";
            no = "454646464";
        }
};

int main()
{

    Person p1;

    p1.fun();

    cout << p1.name << endl;

    return 0;
}