#include <iostream>

void func() 
{  
    static int count = 0; 
    std::cout << count << " "; 
      
    count++; 
} 
  
int main() 
{ 
    for (int i=0; i<5; i++){     
        func(); 
    }
    return 0; 
} 
