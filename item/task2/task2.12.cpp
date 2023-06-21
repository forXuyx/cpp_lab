#include "iostream"
#include "string"

using namespace std;

class Phone
{
public:
    string m_PName;
    Phone(string pName):m_PName(pName){cout << "phone" << endl;}
    ~Phone()
    {
        cout << "phone" << endl;
    }
};

class Person
{
public:
    string m_Name;
    Phone m_Phone;
    Person(string name, string phone): m_Name(name), m_Phone(phone){cout << "person" << endl;}
    ~Person()
    {
        cout << "person" << endl;
    }
};

void test()
{
    Person p("xyx", "apple");
    cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
}

int main()
{
    test();
    return 0;
}