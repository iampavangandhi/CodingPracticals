
#include<iostream>
using namespace std;
int main()
{
	int x = 0,y = 1,sum = 0,mark;
	cout<<"Please Enter the Stop Mark ";
	cin>>mark;
	cout<<x;
	while (sum<mark)
	{
	y=y+sum;
	if(y>mark)
	break;	
	cout<<" "<<y;
	sum=sum+y;
	if(sum>mark)
	break;
	cout<<" "<<sum;


	}
	
}
