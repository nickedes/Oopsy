#include <iostream>
using namespace std;

template <class t>

class paired 
{
	t x,y;
public:
	paired()
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
	paired<int>p1;
	cout << "maximum is:"<<p1.get_max();
	cout << endl << "Enter 2 no.s ";
	paired<float>p2;
	cout << "maximum is:"<<p2.get_max();
	return 0;
}