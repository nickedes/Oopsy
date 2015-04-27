#include <iostream>
#include <math.h>
using namespace std;

class dtwo 
{
	int x,y;
public:
	dtwo (int x = 0,int y = 0) : x(x) , y(x) {}	
	int getX() { return x; }
	int getY() { return y; }
};

class dthree : public dtwo
{
	int z;
public:
	dthree (int i, int j, int k) : dtwo(i, j) , z(k) {}

	float distance (dthree d)
	{
		return sqrt(pow(getX()-d.getX(),2) + pow(getY()-d.getY(),2) + pow(z-d.z,2));
	}
};

int main ()
{
	dthree d1(2,5,7), d2(3,4,5), d3(2,5,7);
	cout <<"Distance is : "<< d1.distance(d2) <<" "<< d1.distance(d3);
	return 0;
}