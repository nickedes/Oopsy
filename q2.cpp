#include <iostream>

using namespace std;

void reverse(int num)
{
	int reversed = 0;
	for (int i=num;i > 0;i/=10)
	{
		reversed *= 10;
		reversed += i%10;
	}
	cout << "Function without return type:" <<endl<<"reversed no. is "<<reversed;
}

int with_reverse(int num)
{
	int reversed = 0;
	for (int i=num;i > 0;i/=10)
	{
		reversed *= 10;
		reversed += i%10;
	}
	cout <<endl<< "Function with return type:" <<endl<<"reversed no. is ";
	return reversed;
}

int main()
{
	int num;
	cout<<"Enter number:";
	cin>>num;
	reverse(num);
	cout<<with_reverse(num);
	return 0;
}