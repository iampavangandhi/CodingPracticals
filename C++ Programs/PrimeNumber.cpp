#include<iostream>
using namespace std;
	
	int prime(int k)
{	int flag=0;
	for(int i=2;i<=k/2;i++)
{
	if(k%i==0)
	flag=1;
}
	if(flag!=1)
	return 1;
	else
	return(k+prime(k+1));
}
int main()
{
	int x,y,z;
	cout<<"Enter ";
	cin>>x>>y;
	z=x+y;
	int sum=prime(z);
	cout<<sum-z;
}
