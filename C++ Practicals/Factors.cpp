//FACTORS

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"ENTER A NUMBER  ";
	cin>>n;
	cout<<"THE FACTORS OF THE NUMBER IS ";
	
	for(int i=1;i<=n-1;i++)
	{
	   if(n%i==0)
	   cout<<i<<" ";
	}
}
