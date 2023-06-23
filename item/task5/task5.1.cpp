//
// Created by 52318 on 2023/6/23.
//
#include "iostream"

using namespace std;

class BasePage
{
public:
    void header()
    {
        cout << "header" << endl;
    }
    void footer()
    {
        cout << "footer" << endl;
    }
    void left()
    {
        cout << "left" << endl;
    }
};

class Jave : public BasePage
{
public:
    void content()
    {
        cout << "java" << endl;
    }
};

class CPP : public BasePage
{
public:
    void content()
    {
        cout << "cpp" << endl;
    }
};

void test()
{
    CPP cpp;
    cpp.header();
    cpp.footer();
    cpp.left();
    cpp.content();
}

int main()
{
    test();

    return 0;
}