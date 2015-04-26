#include <iostream>
using namespace std;

template <typename t>
t mini (t a, t b)
{
	return a < b ? a : b ;
}

int main()
{
	int a=5,b=10;
	char c = 'c',d = 'd';
	float e = 5.10, f = 6.2;
	cout << mini(a,b) <<endl <<mini(c,d)<<endl<<mini(e,f);
	return 0;
}