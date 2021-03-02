#include <iostream>

template <class T>
T max(T a, T b){
    return a>b ? a : b;
}

template char max(char a, char b);

int main()
{
    int x = 3;
    int y = 4;
    std::cout<<"max: "<<max(x,y)<<std::endl;

    std::cout<<"max: "<<max("A","B")<<std::endl;

    char (*ptr)(char,char) = max;
}