
#include <iostream>
#include <string.h>

template <class T>
T max(T a , T b){
    return a>b ? a : b;
}

template<>
const char* max(const char* s1, const char* s2){
    return strcmp(s1,s2)>0?s1:s2;
}


int main()
{
    std::cout<<"max is : "<<max<int>(5,9)<<std::endl;
    
    std::cout<<"max is : "<<max("A","B")<<std::endl;
}