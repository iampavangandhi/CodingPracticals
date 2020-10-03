#include<iostream>
using namespace std;

int fab(int n)
{
	if(n<=1)
	return n;
	
	return fab(n-1)+fab(n-2);
	
}

int main()
{
	int a = 0 + 1 + 1+2+3+5+8+13+21;
	cout<<a; 
	cout<<fab(9);
}

