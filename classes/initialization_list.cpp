
class A{
public:
    A() : A(0){}
    A(int x) : i(x) {}
protected:
    void init(int x) { i =x; }
private:
    int i;
};

class C{

};

/*
    default ctor
    copy ctor
    dtor
    operator =
*/

class B{
public:
    B(int x) : _a(x) { ++x; }
private:
    A _a;
};

int main()
{
    B b(3);
}