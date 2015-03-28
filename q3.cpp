#include <iostream>
using namespace std;

inline void add(int x,int y)
{
	cout<<"addition :"<<x+y<<endl;
}

inline void sub(int x,int y)
{
	cout<<"subtraction :"<<x-y<<endl;
}

inline void mult(int x,int y)
{
	cout<<"multiplication :"<<x*y<<endl;
}

inline void div(int x,int y)
{
	cout<<"division :"<<x/y<<endl;
}

inline void modulo(int x,int y)
{
	cout<<"modulus :"<<x%y<<endl;
}

int main()
{
	int i,j;
	cout<<"enter two no.s to perform arithmetic operations :";
	cin>>i>>j;
	add(i,j);
	sub(i,j);
	mult(i,j);
	div(i,j);
	modulo(i,j);
	return 0;
}