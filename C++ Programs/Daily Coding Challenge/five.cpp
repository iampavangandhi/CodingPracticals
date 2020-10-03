#include<iostream>
using namespace std;

void bubble(int arr[], int n)
{
	int temp;
	for(int i= 0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void print(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int n=0;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	bubble(arr,n);
	
	cout<<"Reverse Sorted Array: "<<endl;
	
	print(arr,n);
	
	cout<<"Best Score: "<<arr[0];

}
