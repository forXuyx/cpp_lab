#include "iostream"

using namespace std;

class Student
{
    public:

    string name;
    string stuNo;

    void setName(string a)
    {
        name = a;
    }

    void setstuNo(string a)
    {
        stuNo = a;
    }
    void showAll()
    {
        cout << name << ' ' << stuNo << endl;
    }
};

int main(int argc, const char** argv) {

    Student stu;

    stu.setName("xyx");
    stu.setstuNo("1241241");
    stu.showAll();

    return 0;
}