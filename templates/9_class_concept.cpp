#include <iostream>

template <class T>
class A1 
{
public:
	A1(T val1, T val2) : _val1(val1), _val2(val2) {}
	T getMax() const;
private:
	T  _val1; 
    T  _val2;
};

template <class T>
T  A1<T>::getMax() const {return _val1 > _val2 ? _val1 : _val2;} 

//------ declare 2 classes to send to A1
struct Foo{ 
    Foo(int x) {}
    /*no operator> */
};

struct Bar{
    Bar(int x) : _x{x} {}
    bool operator>(const Bar& f) const{
        return _x>f._x ? _x : f._x;
    }
private:
    int _x;
};

//------ main
int main(){
    A1<int> a{2,3};
    std::cout<<"Max = "<<a.getMax()<<std::endl;
    A1<Foo> b(4,5);
    // std::cout<<"Max = "<<b.getMax()<<std::endl;
}
