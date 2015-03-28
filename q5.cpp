#include <iostream>
using namespace std;

class pntr_obj
{
	int roll_no;
	char name[20];
public:
	void set_data()
	{
		cout<<"Enter roll no. :";
		cin>>roll_no;
		cout<<endl<<"enter name";
		cin>>name;
	}

	void print()
	{
		 cout<<this->name<<" has invoked print() function"<<endl;
	cout<<"The roll number is "<<this->roll_no<<endl; 
	}

};

int main()
{
	pntr_obj obj1,obj2;
	obj1.set_data();
	obj2.set_data();
	obj1.print();
	obj2.print();
	return 0;
}