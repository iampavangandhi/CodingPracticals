#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	
	int x;
	char arr[4];
	char arr1[4];
	cout<<setw(60)<<"Welcome to XYZ Bank's 24/7 ATM Service"<<endl<<endl
	<<setw(52)<<"SET YOUR GREEN PIN HERE"<<endl<<endl<<endl;
	upar:
	cout<<setw(15)<<"ENTER 4 DITIT PIN NUMBER:	";
	for(int i=0;i<4;i++)
	{
		arr[i]=getch();
		cout<<"*";	
	}
	cout<<endl<<setw(15)<<"RE-ENTER 4 DITIT PIN AGAIN:	";
	for(int j=0;j<4;j++)
	{
		arr1[j]=getch();
		cout<<"*";
		if(arr[j]!=arr1[j])
		{
			cout<<endl<<endl<<setw(45)<<"***ERROR***"<<endl<<endl;
			goto upar;
			break;
		}	
	}
		cout<<endl<<endl<<"Congratulation Your Green Pin Is Sucessfully Set. Thank You. ";
}

