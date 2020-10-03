//PRIME NUMBER CHECKER

#include<iostream>
using namespace std;
void prime(int x)
{
	int flag=0;
	for(int i=2;i<=x/2;i++)
{
	if(x%i==0)
	flag=1;
}
	if(flag==1)
	cout<<x<<" is Not A Prime Number";
	else
	cout<<x<<" is A Prime Number";	
}
	int main()
{	
	int x;
	cout<<"ENTER THE NUMBER TO CHECK ";
	cin>>x;
	prime(x);
}
