#include<iostream>
using namespace std;
int main()
{
	int x,y,temp,z=0,i=1;
	cout<<"Enter Binary Number ";
	cin>>x;
	temp=x;
	while(x>0)
	{
	y=x%10;
	z+=y*i;
	i*=2;
	x/=10;
	}
	cout<<"DECIMAL NO OF "<<temp<<" is "<<z;
}
