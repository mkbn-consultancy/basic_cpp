#include <iostream>

namespace namespace_name 
{
   int x, y; //global variables under this namespace
   void print() {std::cout<<"Hello"<<std::endl;}
}

namespace another_namespace_name
{
   void print() {std::cout<<"World!\n";}
}

int main()
{
   namespace_name::x = 4;
   namespace_name::print();
   another_namespace_name::print();
   return 0;
}
