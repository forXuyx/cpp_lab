#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Person
{
	public:
		int a, b , c;
		Person():a(10), b(20), c(30){}
};

int main()
{
	Person p;
	cout << p.a << p.b << p.c << endl;
	return 0;
}
