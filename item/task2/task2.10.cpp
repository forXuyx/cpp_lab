#include <cstddef>
#include <iostream>

using namespace std;

class Person
{
	public:
		Person()
		{
			cout << "默认构造函数" << endl;
		}
		Person(int age, int heigh)
		{
			m_Age = age;
			m_Height = new int(heigh);
			cout << "有参构造函数" << endl;
		}

		Person(const Person &p)
		{
			cout << "kaobeigouzao" << endl;
			m_Age = p.m_Age;
			m_Height = new int(*p.m_Height);
		}
		~Person()
		{
			if (m_Height != NULL)
			{
				delete m_Height;
				m_Height = NULL;
			}
			cout << "xigou" << endl;
		}
	
	int m_Age;
	int *m_Height;
};

void test01()
{
	Person p1(18, 180);

	cout << "p1 age = " << p1.m_Age << " p1 heigh = " << *p1.m_Height<< endl;

	Person p2(p1);

	cout << "p2 age = " << p2.m_Age << " p1 heigh = "<< *p2.m_Height << endl;
}

int main()
{
	test01();
	return 0;
}
