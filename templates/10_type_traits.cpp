#include <iostream>

//forward declaration 
class ObjectB;

template< bool b > 
struct algorithm_selector 
{ 
  template< typename T > 
  static void implementation( T& object ) 
  { 
        std::cout<<"[algo_selector] implementing default algorithm\n";
	    //implement the algorithm operating on "object" here 
  } 
};

template<> 
struct algorithm_selector< true >
{ 
    template< typename T > 
    static void implementation( T& object )
    { 
        std::cout<<"[algo_selector] call T's algorithm\n";
        object.optimised_implementation(); //let T do that
    } 
};

template<class T> 
struct supports_optimised_implementation { 
    static const bool value = false; 
};

//specialisation of supports_optimised_implementation trait 
//for ObjectB
template<> 
struct supports_optimised_implementation< ObjectB > { 
    static const bool value = true; 
};


template< typename T > 
void algorithm( T& object ) { 
    std::cout<<"[algorithm] call the right alrogithm for T\n";
    algorithm_selector< supports_optimised_implementation<T>::value >
	::implementation(object); 
}

class ObjectA {

};

class ObjectB { 
public: 
    void optimised_implementation() { 
        std::cout<<"[ObjectB] implementing specific algorithm\n";
    //... 
    } 
};


int main() { 

    std::cout<<"[main] call algorithm for ObjectA (default algo)\n";
    ObjectA a; 
    algorithm( a ); //calls default implementation 
    
    std::cout<<"\n[main] call algorithm for ObjectB (specific algo)\n";
    ObjectB b; 
    algorithm( b ); //calls ObjectB::optimised_implementation(); 
    
    return 0; 
}

