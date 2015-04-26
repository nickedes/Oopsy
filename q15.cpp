#include <iostream>
#include <math.h>
using namespace std;

class twod 
{
	int x,y;
public:
	twod (int x = 0,int y = 0) : x(x) , y(x) {}	
	int getX() { return x; }
	int getY() { return y; }
};

class threed : public twod
{
	int z;
public:
	threed (int i, int j, int k) : twod(i, j) , z(k) {}

	float distance (threed d)
	{
		return sqrt(pow(getX()-d.getX(),2) + pow(getY()-d.getY(),2) + pow(z-d.z,2));
	}
};

int main ()
{
	threed d1(2,5,7), d2(3,4,5), d3(2,5,7);
	cout <<"Distance is : "<< d1.distance(d2) <<" "<< d1.distance(d3);
	return 0;
}