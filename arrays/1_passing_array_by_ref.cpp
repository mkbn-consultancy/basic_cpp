#include <iostream>

void f1(int (&arr)[4])
{
    size_t size = sizeof(arr)/sizeof(int);
    std::cout<<"[f1] size = "<<size<<std::endl;
}

void f2(int arr[])
{
    size_t size = sizeof(arr)/sizeof(int);
    std::cout<<"[f2] size = "<<size<<std::endl;
}

int main()
{
    int arrTest1[] = {1,2,3,4};
    int arrTest2[] = {1,2,3,4,5};

    f1(arrTest1);
    f2(arrTest1);

    // f1(arrTest2);
}