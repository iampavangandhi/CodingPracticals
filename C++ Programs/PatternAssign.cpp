#include<iostream>
using namespace std;
int main()
{
	for(int i=0;i<9;i++)
	{
		if(i<5)
		{
			for(int k=1;k<=(i*2);k++)
			cout<<" ";
		}
		else
		{
			for(int k=6;k>(i-5)*2;k--)
			cout<<" ";
		}
		if(i<5)
		{
			for(int j=0;j<=i;j++)
			cout<<"*";
		}
		else
		{
			for(int j=4;j>i-5;j--)
			cout<<"*";
		}
		cout<<endl;
		cout<<endl;
	}
}


