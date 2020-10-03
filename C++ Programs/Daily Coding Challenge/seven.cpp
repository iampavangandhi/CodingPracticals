#include<iostream>
using namespace std;

int multiply(int x ,int y)
{
	if(y==0){
		return 0;
	}
	
	if(y<0){
		return -multiply(x,-y);
		//For Negative Number
	}
	
	return(x + multiply(x, y-1));
}


int main(){
	int peoples = 1200000;
	int days = 365;
	int travel = multiply(peoples,days);
	
	cout<<travel;
}
