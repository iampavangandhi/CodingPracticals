#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"This is A Program to Find Leap Year"<<endl;
	cout<<"Enter A Year ";
	cin>>x;
	if (x%4==0)
		if (x%100>=!0)
		{cout<<"This Is A Leap Year";}
		else if (x%400==0)
		{cout<<"This Is A Leap Year";}
		else
		{cout<<"This is Not A Leap Year";}
	else cout<<"This Is Not A Leap Year";
	return 0;
}
