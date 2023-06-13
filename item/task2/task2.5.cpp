#include <iostream>

using namespace std;

class Person
{
    private:
        string name;
        int age;
        string lover;

    public:
        void setName(string a)
        {
            name = a;
        }
        string getName()
        {
            return name;
        }
        int getAge()
        {
            age = 18;
            return age;
        }
        string setLover(string a)
        {
            lover = a;
        }

};

int main()
{
    Person p;

    p.setName("xyx");
    p.setLover("yjn");
    cout << p.getName() << ' ' << p.getAge() << endl;

    return 0;
}