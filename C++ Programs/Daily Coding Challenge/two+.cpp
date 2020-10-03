#include<iostream>
using namespace std;

int main()
{
	int n,k,d;
	cout<<"Enter: ";
	cin>>n;
	cout<<endl;
	
	k = (n%2==0) ? (n/2)-1 : (n/2); //Initialization
	d = 2;
	
	for(int i=0;i<n;i++) //First Loop
	{
		for(int j=0;j<k+d;j++) //Second Loop
		{
			if(j<k)
			cout<<" ";
			else
			cout<<"*";
		}
		cout<<endl;

		if(i%2!=0) //Loop Jump Condition
		{
			k=k-1;
			d=d+2;
		}	
	}
}
