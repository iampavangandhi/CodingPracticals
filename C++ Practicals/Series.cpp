//SERIES

#include<iostream>
using namespace std;
int main()
{
	double n,sum=0;
	cout<<"Enter No of Terms ";
	cin>>n;
	for(double i=1;i<=n;i++)
{	
	sum=sum+1/i; }
	cout<<sum;	
}
