#include <iostream>
using namespace std;

template <class t>
class complex
{
	t real;
	t img;
public:
	complex()
	{
		real = img = 0.0;
	}
	complex(t x,t y) : real(x),img(y) {}
	complex operator + (complex c);

	void out()
	{
		cout << real << " + i"<< img;
	}
};

template <class t>
complex <t> complex <t>::operator +(complex <t> c)
{
	complex <t> temp;
	temp.real = real + c.real;
	temp.img = img + c.img;
	return temp;
}
int main()
{
	complex <int> c1,c3(4,8),c2(3,4);
	c1 = c3 + c2;
	c1.out();
}