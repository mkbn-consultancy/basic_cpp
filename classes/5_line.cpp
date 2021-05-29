#include <iostream>

#include "5_point.h"

class Line
{
public:
	void setLine(int x1,int y1,int x2,int y2);
	void setLine(const Point& p1,const Point& p2);
	void show() const;
private:
	Point m_p1, m_p2; //composition
};

void Line::setLine(int x1,int y1,int x2,int y2)
{
	m_p1.set_x(x1);
	m_p1.set_y(y1);
	m_p2.set_x(x2);
	m_p2.set_y(y2);
}
void Line::setLine(const Point& p1,const Point& p2)
{
	m_p1 = p1;    //operator = between 2 Points
	m_p2 = p2;
}
void Line::show() const
{
	std::cout<<"Line from: "; m_p1.show();
	std::cout<<" To: "; m_p2.show();
}

int main ()
{	
	Point p1,p2;
	p1.set_x(15); p1.set_y(10);
	
	p2.set_x(0); p2.set_y(0);

	Line line1,line2;
	line1.setLine(15,10,7,6);
	line1.show();
	
	line2.setLine(p1,p2);
	line2.show();
}
