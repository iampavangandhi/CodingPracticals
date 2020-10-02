//PATTERN

#include<iostream>
using namespace std;
int main()
{
	int n;int j;
	cout<<"ENTER THE NO OF ROWS";
	cin>>n;
	
   for(int i=1;i<=n;i++)
   {
   	     for(int j=i;j<=n-1;j++)
   	       cout<<" ";
   	    for(int k=1;k<=(2*i)-1;k++)
   	       {
			  cout<<"*";
		}
		cout<<endl;	
   }
   return 0;
}




