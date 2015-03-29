#include <iostream>
using namespace std;

class student
{
	char name[20];
	int mark1,mark2,mark3;
	friend class friendclass;
public:
	void get_data()
	{
		cout<<"Enter name:";
		cin>>name;
		cout<<"Enter 3 marks:";
		cin>>mark1>>mark2>>mark3;
	}
	void display(int a)
	{
		cout<<"Name = "<<name<<endl;
		cout<<"Average = "<<a<<endl;
	}
};
class friendclass
{
public:
	void mark_avg(student stud)
	{
		int avg=(stud.mark1+stud.mark2+stud.mark3)/3;
		stud.display(avg);
	}
};
int main()
{
	student s;
	s.get_data();
	friendclass obj;
	obj.mark_avg(s);
	return 0;
}