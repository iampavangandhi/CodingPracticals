#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int k=n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<k-1;j++)
		{
		cout<<" ";
		}
		for(int k=0;k<i+1;k++)
		{
		cout<<"*";
		}
		cout<<endl;
		k=k-1;
	}
}
