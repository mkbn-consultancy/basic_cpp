#include <iostream>
class Point
{	
public:	
	void 	set_x(int val)	{ m_x=val; }	
	int 	get_x() 		{return m_x; }	
	void 	set_y(int val)	{ m_y=val; }	
	int 	get_y()		{return m_y; }	
	void 	show(){std::cout<<"x="<<m_x<<" y="<<m_y<<std::endl;}
private:	
	int m_x, m_y;
};

int main ()
{	
	Point p;	
	//p.m_x=15;  -----ERROR
	p.set_x (15);	
	//p.m_y=10;  -----ERROR
	p.set_y (10);	
	p.show ();	
	p.set_x (17);	
	p.set_y (5);

	std::cout<<"x= "<< p.get_x() <<" y= "<<p.get_y()<<std::endl;
}
