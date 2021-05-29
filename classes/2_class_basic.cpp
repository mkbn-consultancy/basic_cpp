#include <iostream>

class MyClass
{
public:
	void func() { std::cout<<"The value of x is: "<< _x <<std::endl; }

	int _x;
};

int main()
{
	MyClass m1, m2;
	m1._x = 3;
	m1.func();
	m2._x = 6;
	m2.func();
}
