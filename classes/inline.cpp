//H file
class MyClass
{
public:
    int function(int x);
};
inline int MyClass::function(int x) { return x*x;}

//---------------------------------------------------------
//CPP file
//#include H file

void f()
{
    MyClass m;
    m.function(3);
}

//---------------------------------------------------------
//main file
//include H file
int main()
{
    MyClass m;
    m.function(3);
}