#include <iostream>
using namespace std;

class matrix
{
	int arr[3][3];
public:
	void read()
	{
		cout<<"enter matrix:";
		for (int row=0;row<3;row++)
			for (int col=0;col<3;col++)
				cin>>arr[row][col];
	}
	void print()
	{
		cout<<"Matrix is: "<<endl;
		for (int row=0;row<3;row++)
		{
			for (int col=0;col<3;col++)
			{	
				cout<<arr[row][col]<<" ";
			}
			cout<<endl;
		}
	}
	matrix operator +(matrix c)
	{
		matrix obj;
		for (int row=0;row<3;row++)
		{
			for (int col=0;col<3;col++)
			{	
				obj.arr[row][col] = arr[row][col] + c.arr[row][col] ;
			}
		}
		return obj;
	}
	matrix operator -(matrix c)
	{
		matrix obj;
		for (int row=0;row<3;row++)
		{
			for (int col=0;col<3;col++)
			{	
				obj.arr[row][col] = arr[row][col] - c.arr[row][col] ;
			}
		}
		return obj;
	}
};

int main()
{
	matrix obj1,obj2,add,sub;
	obj1.read();
	obj2.read();
	cout<<"first ";
	obj1.print();
	cout<<endl<<"second ";
	obj2.print();
	add = obj1 + obj2;
	cout<<"After addition:"<<endl;
	add.print();
	sub = obj1 - obj2;
	cout<<endl<<"After subtraction:"<<endl;
	sub.print();
	return 0;
}