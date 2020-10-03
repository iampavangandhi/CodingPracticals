#include<iostream>
using namespace std;
int main()
{
	char opr;
	float x,y,z;
	
	cout<<"Enter 1st Number : ";
	cin>>x;
	cout<<"Enter 2nd Number : ";
	cin>>y;
	cout<<"Enter Operator : ";
	cin>>opr;
	
	if(opr=='+'){
		z=x+y;
	}
	else if(opr=='-'){
		if(x>y){
		z=x-y;
		}
		else{z=y-x;
		}
	}
	else if(opr=='*'){
		z=x*y;
	}
	else if(opr=='/'){
		z=x/y;
	}
	
	cout<<"Result is : "<<z;
	
	return 0;
}
