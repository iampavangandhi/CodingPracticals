#include<iostream>
using namespace std;

int main()
{
	int n,k,d;
	cin>>n;
	k=(n/2)-1;
	d=(n/5);
	
	for(int i=0;i<n/2;i++)
	{
		for(int t=0;t<2;t++)
		{
			for(int j=0;j<k+d;j++)
			{
				if(j<k)
				cout<<" ";
				else
				cout<<"*";
			}
			cout<<endl;
		}
		k=k-1;
		d=d+2;	
	}
}
