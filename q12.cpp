#include <iostream>
using namespace std;
const int arr_size = 10;

class vector
{
	int *array;
public:
	void * operator new(size_t size)
	{
		vector *my_vector;
		my_vector = ::new vector;
		my_vector->array = new int[arr_size];
		return my_vector;
	}
	void operator delete( void *vec)
	{
		vector *my_vector;
		my_vector = (vector *)vec;
		delete (int *) my_vector->array;
		::delete vec;
	}
	void read()
	{
		for(int i=0;i<arr_size;i++)
			cin>>array[i];
	}
	int sum()
	{
		int sum = 0;
		for(int i=0;i<arr_size;i++)
			sum+=array[i];
	}
};

int main()
{
	vector *my_vector = new vector;
	cout<<"enter data .."<<endl;
	my_vector->read();
	cout<<"sum : "<<my_vector->sum();
	delete my_vector;
	return 0;
}