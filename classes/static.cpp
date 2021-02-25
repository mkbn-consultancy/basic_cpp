class A
{
public:
    static int x;
};

int A::x;

void f(){
    static int x = 0;
    x++;
}

int main()
{
    A a;
    a.x = 8;
}
