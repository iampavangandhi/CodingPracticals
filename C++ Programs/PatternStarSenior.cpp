#include<iostream>
using namespace std;
int main()
{
	for(int i=0;i<9;i++)
		if(i<5)
{
	{
		for(int j=0;j<5-i;j++)
		{
			cout<<"*";
		}
		for(int j=0;j<(i*2);j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5-i;j++)
		{
			cout<<"*";
		}
	cout<<endl;
	}
}
		else
	{
		for(int k=0;k<i-3;k++)
		{
			cout<<"*";
		}
		for(int k=0;k<16-(i*2);k++)
		{
			cout<<" ";
		}
		for(int k=0;k<i-3;k++)
		{
			cout<<"*";
		}
	cout<<endl;
	}
}
