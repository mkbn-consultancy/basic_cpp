#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

class Point
{	
public:	
	void 	set_x(int val)	{ m_x=val; }	
	int 	get_x() const		{return m_x; }	
	void 	set_y(int val)	{ m_y=val; }	
	int 	get_y()	const	{return m_y; }	
	void 	show() const {std::cout<<"x="<<m_x<<" y="<<m_y<<std::endl;}
private:	
	int m_x, m_y;
};

#endif //__POINT_H__