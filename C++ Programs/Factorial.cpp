// Program to calculate factorial of a number
#include<iostream>
using namespace std;
int sum(int n)
{
	if(n==1)
	return(1);
	else
	return(n*sum(n-1)); // Recursively calculate factorial of n-1 and so on
}
int main()
{
	int n=5,total;
	
	total=sum(n);
	cout<<total;
}
