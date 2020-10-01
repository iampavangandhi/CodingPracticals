//SUM & PRODUCT OF DIGITS

#include<iostream>
using namespace std;
int main()
{
	int x,y=0,sum=0,product=1;
	cout<<"ENTER A NUMBER ";
	cin>>x;
	while(x>0)
{
	y=x%10;
	sum+=y;
	product*=y;
	x=x/10;
}
	cout<<"THE SUM OF DIGITS IS "<<sum<<endl;
	cout<<"THE PRODUCT OF DIGITS IS "<<product;
}
