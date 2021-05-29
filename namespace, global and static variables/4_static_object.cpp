#include <iostream>

struct A
{
    A() {std::cout<<"[A::A()] initializing A object\n";}
    ~A(){std::cout<<"[A::~A()] destroying A object";}
};

A a_g;

void f(){
    std::cout<<"[f] inside function f\n";
    A a_local;
}

int main()
{
    std::cout<<"\n[main] main started\n";

    f();

    std::cout<<"[main] main finished\n\n";
}