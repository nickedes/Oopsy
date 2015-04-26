#include <iostream>
using namespace std;

template <class t>

class lol 
{
	t x,y;
public:
	lol()
	{
		cin >> x >> y;
	}
	t get_max()
	{
		return x > y ? x : y;
	}
};
int main()
{
	cout << "Enter 2 no.s ";
	lol<int>p1;
	cout << "maximum is:"<<p1.get_max();
	cout << endl << "Enter 2 no.s ";
	lol<float>p2;
	cout << "maximum is:"<<p2.get_max();
	return 0;
}