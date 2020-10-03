#include <iostream>
using namespace std;
long factorial(int n)
{
    if(n==1) return 1;
    else return (n*factorial(n-1));
}
long permute(int n, int r) {return (factorial(n)/factorial(n-r));}
long combine(int n, int r) {return (factorial(n)/(factorial(r)*factorial(n-r)));}
int main()
{
    cout<<"Enter n \n";
    long n,r;
    cin>>n;
    cout<<"Enter r \n";
    cin>>r;
    cout<<"Permutation of "<<n<<" objects taken "<<r<<" at a time is\t\t"<<permute(n,r)<<endl<<endl;
    cout<<"combination of "<<n<<" objects taken "<<r<<" at a time is\t\t"<<combine(n,r)<<endl;
    
}