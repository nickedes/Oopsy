#include <iostream>

using namespace std;

template <class t>

void swap(t & a, t & b)
{
	t x = a;
	a = b;
	b = x;
}

template <class t>

void sort( t & arr, int N)
{
	for (int i = 0 ; i < N ; i++)
	{
		for (int j = 0 ; j < N ;j++)
		{
			if (arr[j] > arr[j+1])
				swap(arr[j],arr[j+1]);
		}
	}

	for(int i=0 ; i < N ; i ++ )
	{
		cout << arr[i];
	}
}

int main()
{
	int n,array[50];

	cout << "Enter the size of array: ";
	cin >> n;

	cout <<"enter array: ";
	for (int i=0 ; i < n ; i ++ )
	{
		cin >> array[i];
	}
	sort(array,n);
	for(int i=0 ; i < n ; i ++ )
	{
		cout << array[i];
	}
	return 0;
}