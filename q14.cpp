#include <iostream>
#include <string.h>
using namespace std;

class student
{
	int roll,age,clas ;
	char name[10];
public:
	student()
	{
		roll = 1;
		age = 17;
		clas = 12;
		strcpy(name,""); 
	}
	friend istream & operator >> (istream &obj,student &s)
	{
		cout <<"enter name:";
		obj >> s.name;
		cout <<endl<<"enter class:";
		obj >> s.clas;
		cout <<endl<<"enter roll no.";
		obj >> s.roll;
		cout <<"enter age:";
		obj >> s.age;
		return obj;
	}
	friend ostream & operator << (ostream &obj,student &s)
	{
		cout <<"name:";
		obj << s.name;
		cout <<endl<<"class:";
		obj << s.clas;
		cout <<endl<<"roll no.";
		obj << s.roll;
		cout <<"age:";
		obj << s.age;
		return obj;
	}
};

int main()
{
	student s,s1;
	cin >> s;
	cout << s;
	cin >> s1;
	cout << s1;
	return 0;
}