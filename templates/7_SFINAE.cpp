//-------- MKBN Training and Consultancy --------//
//--------------- miri@mkbn.co.il ---------------//
#include <iostream>

struct Test {
  typedef int foo;
};

template <typename T>
void f(typename T::foo) {   // Definition #1
    std::cout<<"inside f(T::foo)\n";
}

template <typename T>
void f(T) {                 // Definition #2
    std::cout<<"inside f(T)\n";
}

void testSFINAE_1() {
  f<Test>(10);   // Call #1.
  
  f<int>(10);       // Call #2. Without error (even though there is no int::foo)
                    // thanks to SFINAE.
}

/////////////////////

long 
multiply(int i, int j) { 
  return i * j; 
}

template <class T>
typename T::multiplication_result //return type
multiply(T t1, T t2)
{
  return t1 * t2;
}

void testSFINAE_2(void)
{
  multiply(4,5);  //can bind to long multiply(int,int)
                  //however the compiler tries to generate candidates from the templated multiply.
                  //that may cause an error since int does not have a member multiplication_result.
                  //due to SFINAE, this option is taken off and not considered.
}

int main()
{
    testSFINAE_1();

    testSFINAE_2();
}