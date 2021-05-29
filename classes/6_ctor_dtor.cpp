#include <iostream>

class Point
{	
public:	
	Point () {m_x=0; m_y=0;}	//default constructor
	Point (int valX, int valY) {m_x=valX; m_y=valY;} 	
	~Point () {std::cout<<"GoodBye"<<std::endl;} //destructor

	void set_x (int val)	{ m_x=val; }	
	int  get_x () 		{return m_x; }	
	void set_y (int val)	{ m_y=val; }	
	int  get_y () 		{return m_y; }	
	void show (){std::cout<<"x="<<m_x<<" y="<<m_y<<std::endl; }
private:	
	int m_x, m_y;
};

int main ()
{	
	Point p1 (15,10);	
	Point p2;	//default point
	std::cout<<"The first point - ";	
	p1.show();	
	std::cout<<"The second point - ";	
	p2.show();	
}
