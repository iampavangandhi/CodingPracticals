#include<iostream>
using namespace std;
int main()
{
	int myarr[3][3]={};
	int i,j,sum=0;
	for(i=0;i<3;i++)
	{	for(j=0;j<3;j++)
		{ 		cout<<"Please Enter The Number";
	  		cin>>myarr[i][j];
	  
		}
	}
	cout<<endl<<"thank you for using array"<<endl<<"your entered array is"<<endl;
	for(i=0;i<3;i++)
		{for(j=0;j<3;j++)
			{
				cout<<myarr[i][j]<<" ";
				if(i==j)
				sum=sum+myarr[i][j];
			}
			cout<<endl;
		}
		cout<<endl<<"and the sum of first diagonal of array is "<<sum;
		return 0;
}
