#include <iostream>
using namespace std;

class list
{
public:
	int data;
	list *next;
	list()
	{
		data = 0 ;
		next = NULL; 
	}
	list(int x)
	{
		data = x;
	 	next = NULL;
	}
	~list() {}
	friend list  operator + (list  l, list  node)
	{
		list *ptr = new list;
		if(l.next == NULL)
		{
			l.next = &node;
		}
		else
		{
			ptr = &l;
			while(ptr->next!=NULL)
			{
				ptr = ptr->next; 
			}
			ptr->next = &node;
		}
		cout << endl;
		list *p =  new list;
		p = &l;
		while(p->next!=NULL)
		{
			cout << p->data <<"->";
			p = p->next;
		}
		cout << p->data;
		return l;
	}
};

int main()
{
	list node(3),temp;
	temp = temp + 6;
	node = node + 4;
	node = node + 5;
	return 0;
}
