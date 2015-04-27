#include <iostream>
using namespace std;

class base
{	

	int real,img;
public:
	base ()
	{
		real = 0;
		img = 0;
	}
	base (int r,int i):real(r),img(i) {}
	void input()
	{
		cout<<"enter real and img parts:";
		cin >> real >> img;
	}
	int getr() {return real;}
	int geti() {return img;}
	void display()
	{
		cout<<"Complex no. is:"<<real<<" + i"<<img<<endl;
	}
};

class derived : public base 
{

public:
	derived():base() {}
	derived(int x,int y):base(x,y) {}
	derived sum(derived d,base b)
	{
		//
		cout << d.getr()<<b.getr()<<d.geti()<<b.geti()<<endl;
		return derived(d.getr()+b.getr(),d.geti()+b.geti()) ;
	}
	friend class derv;
};

class derv
{
	int d_real,d_img;
public:
	derv ()
	{
		d_real = 0;
		d_img = 0;
	}
	derv (int r,int i):d_real(r),d_img(i) {}
	void input()
	{
		cout<<"enter real and img parts:";
		cin >> d_real >> d_img;
	}
	int getr() {return d_real;}
	int geti() {return d_img;}
	void display()
	{
		cout<<"Complex no. is:"<<d_real<<" + i"<<d_img<<endl;
	}
	void diff(base &d)
	{
		cout<<"Complex no. is:"<<d_real - d.getr()<<" + i"<<d_img - d.geti()<<endl;
	}
};
int main()
{
	base b(2,5);
	derived d(4,5),d1;
	d1 = d1.sum(d,b);
	d1.display();
	derv x(5,9);
	x.diff(b);
	return 0;
}