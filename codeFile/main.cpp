#include<iostream>
#include "Test.h"

using namespace std;
int main()
{
	Test *t = new Test();
	t->setAge(20);
	int age = t->getAge();
	cout << age << endl;
	return 0;
}
