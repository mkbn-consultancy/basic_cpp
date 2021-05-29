#include <iostream>

template <typename T> void f(T) { std::cout << "Less specialized\n";} 

template <typename T> void f(T*) { std::cout<< "More specialized\n";} 

int main() 
{ 
    int i =0; 
    int *pi = &i; 
    f(i); 
    f(pi);
}
