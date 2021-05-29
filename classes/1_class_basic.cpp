#include <iostream>

class MyClass
{
public:
	void func() { std::cout<<"Hello from MyClass::func!"<<std::endl;}

	int _x;
};

int main()
{
	MyClass m;
	m._x = 3;
	m.func();
}
