//PALINDROME

#include <iostream>
using namespace std;
int main()
{
	int num,y=0,z=0,a=0;
	cout<<"ENTER A NUMBER YOU WANNA CHECK ";
	cin>>num;
	a=num;
	// Loop to Reverse y and storing the result to z 
	while(num>0){
	y=num%10; // Accessing the digit at units place
	z=z*10+y; // Appending to z	
	num=num/10; 
	}
	if(a==z)
	cout<<z<<" is Palindrome";
	else
	cout<<z<<" is not Palindrome";
}
