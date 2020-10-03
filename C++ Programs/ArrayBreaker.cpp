#include<iostream>
using namespace std;
int main()
{
	int stop;
	int myarr1[99], myarr2[99], myarr3[99];
	cout<<"Please Enter the No. of Elements ";
	cin>>stop;
	if (stop%2==0)
	{
	for(int i=0;i<stop;i++)
	{	
		cout<<"Please Enter The Number ";
	  	cin>>myarr1[i];
	}
	cout<<"Breaking of the Array begins";
	for(int i=0;i<stop;i++)
	{
		if(i<stop/2)
		myarr2[i]=myarr1[i];
		else
		myarr3[i-stop/2]=myarr1[i];
	}
	cout<<endl;
	for(int i=0;i<stop;i++)
	{	
	    if(i<stop/2)
		cout<<myarr2[i];
		else
		cout<<myarr3[i-stop/2];
	}
	}
	else
	cout<<"Enter Only Even Number";
}
