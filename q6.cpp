#include <iostream>
using namespace std;

class c_polygon
{
protected:
	int width, height;
public:
	void init_poly(int a,int b)
	{
		width = a;
		height = b;
	}
	virtual int area()
	{
		return 0;
	}
};

class rectangle: public c_polygon
{
public:
	int area()
	{
		return width * height;
	}
};

class triangle: public c_polygon
{
public:
	int area()
	{
		return width * height / 2;
	}
};

int main()
{
	rectangle r;
	triangle t;
	c_polygon *p;
	int x,y;
	cout<<"enter length and breadth of rectangle:";
	cin>>x>>y;
	p=&r;
	p->init_poly(x,y);
	cout<<"area of rectangle:"<<p->area()<<endl;
	cout<<"enter base and height of triangle:";
	cin>>x>>y;
	p=&t;
	p->init_poly(x,y);
	cout<<"area of triangle:"<<p->area()<<endl;
	return 0;
}
