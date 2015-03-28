#include <iostream>
using namespace std;

int nobjects=0; //created
int nobj_des=0; //destroyed

class myclass
{
public:
	myclass()
	{
		++nobjects;
	}
	~myclass()
	{
		++nobj_des;
	}
	void show()
	{
		cout<<"Total No. of objects created: "<<nobjects<<endl;
		cout<<"Total No. of objects destroyed: "<<nobj_des<<endl;
	}
};

int main()
{	
	myclass obj1,obj2;
	obj1.show();
	{ //new block
		myclass obj1,obj2,obj3;
		obj3.show();
	}
	obj2.show();
	myclass obj3;
	obj3.show();
	return 0;
}