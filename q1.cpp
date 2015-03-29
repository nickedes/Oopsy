#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char *str,input[50];
	cout<<"Enter string:";
	cin >> input;
	str = input;
	int no_vowels = 0;
	for (int i=0;i<strlen(input);i++,str++)
	{
		switch(*str)
		{
			case 'a':
			case 'A':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':no_vowels++;
			break;
		}
	}
	cout<<"The no. of vowels are: "<<no_vowels<<endl;
	return 0;	
}