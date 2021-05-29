#include <iostream>

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
    std::cout<<"[Point::dtor] Destroying a point...\n";
}

class Line
{
public:
	Line()	{std::cout<<"[Line::default ctor] Creating a default line...\n";}
	Line(int x1,int y1,int x2,int y2);
	~Line()	{std::cout<<"[Line::dtor] Deleting a line...\n";}
private:
	Point m_p1, m_p2;
};

Line::Line(int x1,int y1,int x2,int y2)
{
	std::cout<<"[Line::ctor] Creating a line from 4 integers...\n";
	//set the x and y values of p1 and p2 
	//with the arguments x1,y1,x2,y2.
	m_p1.set_x(x1);
    m_p1.set_y(y1);
    m_p2.set_x(x2);
    m_p2.set_y(y2);
}

int main()
{
	Line l1;
	Line l2(2,5,7,8);
}
