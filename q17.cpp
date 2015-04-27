#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;
 
int main ()
{
   int ch,flag=0,flag2; 
   char data[20],src[20],phn[10];
   while (1)
   {	   
	cout<<"\nMenu\n1.Add\n2.Delete\n3.Search\n4.Save & Display\n5.Exit\nEnter your choice: ";
	cin>>ch;	
   	switch(ch)
   	{				
   	case 1:
	{
		ofstream outfile;
   	    outfile.open("afile.txt",ios::app);
   	    cout << "\nEnter your name: "; 
		cin.ignore();
   	    cin.getline(data,20);
   	    outfile << data << ' ';
	    cout << "Enter your Phone: "; 
		cin.ignore();
		cin.getline(phn,10);
      	outfile<< phn << endl;
        outfile.close();
		break;
	}
	case 2: 
	{
		ifstream infile("afile.txt");
    	ofstream outfile("temp.txt"); 
    	cout << "\nEnter name you want to erase from database: "; 
		cin.ignore();
		cin.getline(src,20);
		while(infile>>data>>phn)
    	{
        	if(strcmp(data,src))
			{
				flag2=0;
        		outfile << data <<' '<< phn <<endl;
			}
	       	else 
        		flag2=1;
    	}
    	infile.close();
    	outfile.close();
    	remove("afile.txt"); 
    	rename("temp.txt","afile.txt");
    	if(flag2==0)
        	cout<<"There is no record with the name you entered"<<endl;
    	else
       		cout<<"Record has been deleted." << endl;
		break;
	}
	case 3:
	{
 		ifstream infile; 
   		infile.open("afile.txt"); 
		cout<<"\nEnter name of person to be searched: ";
		cin.ignore();
		cin.getline(src,20);   		
		while(infile>>data>>phn)
		{ 
			if(strstr(data,src))
			{
				flag=1;
				break;
			}
			else
				flag=0;
		}
		if (flag==1)
		{
			cout<<"\nRecord found!!!";
			cout<<"Name: "<<data<<"\nPhone: "<<phn<<endl;
		}
		else
			cout<<"\nRecord not found";
		infile.close();
		break;
	}
	case 4:
	{
		ifstream infile;
		infile.open("afile.txt");
		while(infile>>data>>phn)
			cout<<"Name: "<<data<<"\nPhone: "<<phn<<endl;	
		break;
	}
	case 5: return 0;
	}
  }
  return 0;
}