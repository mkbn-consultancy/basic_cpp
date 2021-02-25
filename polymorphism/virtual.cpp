#include <iostream>

class A
{
public:
    ~A() {std::cout<<"~A\n";}
};

class Shape : public A
{
public:
    virtual void draw() = 0;
    virtual ~Shape(){ std::cout<<"~Shape\n";}
};

class Circle : public Shape
{
    void draw() { /**/}
    ~Circle(){ std::cout<<"~Circle\n";}
};

class Triangle : public Shape
{
    void draw() { /**/}
    ~Triangle(){ std::cout<<"~Triangle\n";}
};


class X
{
public:
    void q() {}
    void f(){}
};

class Y : public X
{
public:
    void f(int x){} //function name hiding - no overloading on inheritance!
};


int main()
{

    Y yObj;
    yObj.q();
    yObj.X::f();







    Shape* p = new Triangle;

    p->draw();
    delete p;

    std::cout<<"--------------------\n";

    A* pA = new Triangle;
    delete pA;
}