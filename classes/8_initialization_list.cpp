#include <iostream>
#include <math.h>

class Point
{
public:
	Point();
	Point(int x, int y);
	~Point();

	void set_x (int val)	{ m_x=val; }	
	int  get_x () 		{return m_x; }	
	void set_y (int val)	{ m_y=val; }	
	int  get_y () 		{return m_y; }	
	void show (){ std::cout<<"x="<<m_x<<" y="<<m_y<<std::endl; }
private:
	int m_x, m_y;
};

Point::Point()
{
    std::cout<<"[Point::default ctor] Creating a default point...\n";
    m_x = 0;
    m_y = 0;
}

Point::Point(int x, int y) //constructor with args
{	std::cout<<"[Point::ctor] Creating a point from 2 integers...\n";
	m_x=x; m_y=y;
}

Point::~Point()
{
    std::cout<<"[Point::dtor] Good Bye\n";
}

//---------- Line Class ----------//

class Line
{	
private:	
	Point m_p1,m_p2;

public:	
	Line(int x1, int y1, int x2, int y2); 	
	~Line();  //destructor

	double 	length ();	
	void 	setLine (int x1,int x2,int y1,int y2);	
	void 	show ();
};

//~~~~~~~~~~~~~~~~~~~~~~~~
// Constructor with initialization list
//~~~~~~~~~~~~~~~~~~~~~~~~
Line::Line(int x1,int y1,int x2,int y2)
	: m_p1(x1,y1), m_p2(x2,y2) 
{ 
	std::cout<<"[Line::ctor] Creating a line from 4 integers...\n";
}
//~~~~~~~~~~~~~~~~~~~~~~~~
// Destructor
//~~~~~~~~~~~~~~~~~~~~~~~~
Line::~Line( ) 
{
	std::cout<<"[Line::dtor] See you again soon!\n";
}
//~~~~~~~~~~~~~~~~~~~~~~~~
// Length 
//~~~~~~~~~~~~~~~~~~~~~~~~
double Line::length () 
{	
	return sqrt(pow(m_p1.get_x()-m_p2.get_x(),2) + 
			pow(m_p1.get_y()-m_p2.get_y(),2));
}

void Line::setLine (int x1,int x2,int y1,int y2) 
{		
	m_p1.set_x(x1); m_p1.set_y(y1);		

	//m_p2=Point(x1,y1); 
		// very inefficient and dangerous!

	m_p2.set_x(x2); m_p2.set_y(y2);
}

void Line::show() 
{		
	std::cout<<"The first point - ";	
	m_p1.show(); std::cout<<std::endl;	
	std::cout<<"The second point - ";	
	m_p2.show(); std::cout<<std::endl;
}

int main ()
{	
	Point p(15,10);	
	p.show();
	Line l(2,90,16,1);	
	l.show();	
	std::cout<<"[main] l's length is - "<<l.length()<<std::endl;
}
