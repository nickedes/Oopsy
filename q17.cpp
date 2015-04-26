#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main()
{
	fstream  afile;
	char data[100];
	int age, option;
	while(1)
	{
		cout << "Select File Operations 1. Add"<<endl<<"2. Delete"<<endl<<"3. Search";
		cout<<endl<<"4. Save"<<endl<<"5. Exit"<<endl<<"Enter your option: ";
		cin >> option;
		switch(option)
		{
			case 1:
				afile.open("example.txt", ios::out);
				cout << "Enter name and age for adding to file.";
				cin >> data;
				cin >> age;
				afile << data << age;
				afile.close();
				break;
			case 2:
				cout << "Before Deletion:";
				afile.open("example.txt", ios::trunc);
				afile.clear();
				afile.close();
				break;
			case 3:
				break;
			case 4:
				if(afile)
					afile.close();
				cout << "saved"<<endl;
				break;
			case 5: 
				exit(0);
				break;
			default: cout <<"wrong choice";
		}
	}
	return 0;
}