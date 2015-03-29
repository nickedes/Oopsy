#include <iostream>
using namespace std;

class friendfunc2;

class friendfunc1
{
	float a,b;
	friend float cal_avg(friendfunc1 &,friendfunc2 &);
public:
	void get_data()
	{
	cout<<"\nEnter 2 numbers: ";
	cin>>a>>b;
	}
};

class friendfunc2
{
	float c,d,e;
	friend float cal_avg(friendfunc1 &,friendfunc2 &);
public:
	void get_data()
	{
		cout<<"\nEnter 3 numbers: ";
		cin>>c>>d>>e;
	}
};
float cal_avg(friendfunc1 &f1,friendfunc2 &f2)
{
	float avg=(f1.a+f1.b+f2.c+f2.d+f2.e)/5;
	return avg;
}
int main()
{
	friendfunc1 obj1;
	friendfunc2 obj2;
	obj1.get_data();
	obj2.get_data();
	cout <<"Average : "<<cal_avg(obj1,obj2)<<endl;
	return 0;
}
