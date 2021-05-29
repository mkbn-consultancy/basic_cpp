#include <stdio.h>

//compiles with g++ but not with gcc!

int f()
{
    printf("[f] retrurning an integer\n");
    return 5;
}

int x = f();    //error in gcc: initializer element is not constant

int main()
{
    printf("[main] starting the main\n");
}