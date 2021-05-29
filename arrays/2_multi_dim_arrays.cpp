#include <iostream>

int main(){
   int disp[2][3]; //2D array declaration
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         std::cout << "Enter value for disp[" << i << "][" << j << "]:";
         std::cin>>disp[i][j];
      }
   }
   
   //Displaying array elements
   std::cout<<"Two-Dimensional array elements:\n";
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         std::cout<<disp[i][j];
      }
      std::cout<<std::endl;
   }
   return 0;
}
