#include <iostream>
using namespace std;

class company
{
	int salary;
	int modules;
public:
	void read()
	{
		cout<<"enter salary:";
		cin>>salary;
		cout<<"enter no. of modules:";
		cin>>modules;
	}
	void print()
	{
		cout<<"Salary is: "<<salary<<endl;
		cout<<"no. of modules are: "<<modules<<endl;
	}
	company operator +(company c)
	{
		company obj;
		obj.salary = salary + c.salary;
		obj.modules = modules + c.modules;
		return obj;
	}
	company operator -(company c)
	{
		company obj;
		obj.salary = salary - c.salary;
		obj.modules = modules - c.modules;
		return obj;
	}
};

int main()
{
	company obj1,obj2,add,sub;
	obj1.read();
	obj2.read();
	add = obj1 + obj2;
	cout<<"After addition:"<<endl;
	add.print();
	sub = obj1 - obj2;
	cout<<endl<<"After subtraction:"<<endl;
	sub.print();
	return 0;
}