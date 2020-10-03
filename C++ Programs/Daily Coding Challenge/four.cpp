#include<iostream>
using namespace std;

int main()
{
	int n;
	int i=1;
	cin>>n;
	
	while(true)
	{
		if(n<=i*8)
		{
			break;
		}
		i=i+1;
	}
	cout<<i;
}
