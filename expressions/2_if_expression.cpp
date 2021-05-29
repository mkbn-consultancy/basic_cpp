#include <iostream>

int main()
{	
    int x=0, y=0;

	if(x++ && y++){
		std::cout<<"(1)"<<std::endl;
	}

	x=0, y=0;

	if(x==0 || ++y){
		std::cout<<"(2)"<<std::endl;
	}

	if((x=0) && (x++)){	//bad practice!
		std::cout<<"(3)"<<std::endl;
	}
	std::cout<< "x = " << x <<std::endl;

	if(x++ && (x=0)){	//bad practice!
		std::cout<<"(4)"<<std::endl;
	}
	std::cout<< "x = " << x <<std::endl;
}
