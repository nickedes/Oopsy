#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char *str,input[50];
	cout<<"Enter string:";
	cin >> input;
	str = input;
	
	cout<<*str;
	int no_vowels = 0;
	for (int i=0;i<strlen(input);i++,str++)
	{
		switch(*str)
		{
			case 'a':
			case 'b':
			case 'e':
			case 'i':
			case 'o':
			case 'u':no_vowels++;
			break;
		}
	}
	

	cout<<endl<<no_vowels;
	return 0;	
}