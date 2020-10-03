#include <iostream>
using namespace std;
int fibonacci(int n);
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<fibonacci(i)<<" , ";
    }
    cout<<endl;
}
int fibonacci(int n)
{
    if (n==1) return 1;
    else if(n==0) return 0;
    else
    {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}