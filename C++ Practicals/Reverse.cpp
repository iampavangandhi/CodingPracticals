//REVERSE

#include<iostream>
using namespace std;
int main()
{
	int num,y=0,z=0,a=0;
	cout<<"ENTER A NUMBER TO REVERSE ";
	cin>>num;
	a=num;
	while(num>0)
{
	y=num%10;
	z=z*10+y;
	num=num/10;
}
	cout<<z;
}
