////////
//////// Created by 52318 on 2023/6/23.
////////
//////#include "iostream"
//////#include "fstream"
//////
//////using namespace std;
//////
//////void test01()
//////{
//////    ofstream ofs;
//////
//////    ofs.open("test.txt", ios::out);
//////
//////    ofs << "name:xyx" << endl;
//////    ofs << "sex:nan" << endl;
//////    ofs << "age:18" << endl;
//////
//////    ofs.close();
//////}
//////
//////int main()
//////{
//////    test01();
//////
//////    return 0;
//////}
////
////#include "iostream"
////#include "fstream"
////#include "string"
////
////using namespace std;
////
////void test01()
////{
////    ifstream ifs;
////
////    ifs.open("test.txt", ios::in);
////
////    if (!ifs.is_open())
////    {
////        cout << "failed" << endl;
////        return;
////    }
////
//////    char buf[1024] = {0};
//////    while (ifs >> buf)
//////    {
//////        cout << buf << endl;
//////    }
//////
//////    ifs.close();
//////    char buf[1024] = {0};
//////    while (ifs.getline(buf, sizeof buf))
//////    {
//////        cout << buf << endl;
//////    }
////
//////    string buf;
//////
//////    while (getline(ifs, buf))
//////    {
//////        cout << buf << endl;
//////    }
////
////    char c;
////    while ((c = ifs.get()) != EOF)
////    {
////        cout << c;
////    }
////
////    ifs.close();
////}
////int main()
////{
////    test01();
////
////    return 0;
////}
//
//#include "iostream"
//#include "fstream"
//#include "string"
//
//using namespace std;
//
//class Person
//{
//public:
//
//    char m_Name[64];
//    int m_Age;
//};
//
//void test01()
//{
//    ofstream ofs;
//
//    ofs.open("person.txt", ios::out | ios::binary);
//
//    Person p = {"xyx", 18};
//    ofs.write((const char  *)&p, sizeof(Person));
//
//    ofs.close();
//}
//
//int main()
//{
//    test01();
//
//    return 0;
//}

#include "iostream"
#include "fstream"
#include "string"

using namespace std;

class Person
{
public:
    char m_Name[64];
    int m_Age;
};

void test01()
{
    ifstream ifs;

    ifs.open("person.txt", ios::in | ios::binary);

    if (!ifs.is_open())
    {
        cout << "failed" << endl;
        return;
    }

    Person p;

    ifs.read((char *)&p, sizeof(Person));

    cout << p.m_Name << p.m_Age << endl;

    ifs.close();
}

int main()
{
    test01();

    return 0;
}