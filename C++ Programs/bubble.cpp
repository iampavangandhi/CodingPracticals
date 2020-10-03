#include<iostream>
using namespace std;

int main()
{
	int temp;
	int arr[] = {2,3,1,0,7,3,9,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	for(int i= 0;i<n-1;i++)
	{
		for(int f=0;f<n-i-1;f++)
		{
		
			if(arr[f]>arr[f+1])
			{
				temp = arr[f];
				arr[f] = arr[f+1];
				arr[f+1] = temp;
			}
		}
	}
	for(int j = 0;j<sizeof(arr)/sizeof(arr[0]);j++)
	{
		cout<<arr[j]<<endl;
	}
	
}
