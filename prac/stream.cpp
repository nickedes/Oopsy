// Saving an object to file with stream operator overloaded.
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class data 
{
	char name[10];
	int age;
public:
	data()
	{
		strcpy(name," ");
		age = 0;
	}
	data(char a[], int x)
	{
		strcpy(name,a);
		age = x;
	}
	void out()
	{
		cout << "Name :" << name << endl <<"Age :" << age;
	}
	friend ofstream & operator << (ofstream &of, data &d)
	{
		of << d.name ;
		of << endl;
		of << d.age ;
		return of;
	}
	friend ifstream & operator >> (ifstream &of, data &d)
	{
		of >> d.name ;
		of >> d.age ;
		return of;
	} 
};

int main()
{
	ofstream f("out.txt");
	char name[] = "Test-string";
	data obj(name,21);
	// Writing object to file. 
	f << obj;
	f.close();

	ifstream fi("out.txt");
	data new_obj;
	// Reading from file and putting in object.
	fi >> new_obj;
	new_obj.out();
	return 0;
}