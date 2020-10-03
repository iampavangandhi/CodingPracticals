#include<iostream>
using namespace std;
int main()
{
	int n,res;
	int left=0,right=0;
	cin>>n;
	int arr[3][3];
	
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
			if(i==j)
			{
				left+=arr[i][j];
			}
			
			if(i+j==n-1)
			{
				right+=arr[i][j];
			}
		}
	}
	if(left>right)
	{
		res=left-right;
		cout<<res;
	}
	else if(left<right)
	{
		res=right-left;
		cout<<res;
	}
	else
	{
		res=0;
		cout<<res;
	}
	
	
}
