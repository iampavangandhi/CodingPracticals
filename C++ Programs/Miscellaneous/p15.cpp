#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout<<"Enter the degree of polynomial"<<endl;
    int n;
    cin>>n;
    int array[n];
    for(int y=0; y<n; y++) array[y]=0;
    for(int i=n; i>=0;i--)
    {
        cout<<"Enter the coefficient of x^"<<i<<" ";
        cin>>array[i];
        cout<<endl;
    }
    cout<<"Function is f(x) = ";
    for(int h=n; h>=0; h--) cout<<array[h]<<"x^"<<h<<"+ ";
    cout<<endl;
    int var;
    cout<<"Enter the value of n to compute f(n) for the fuction ";
    cin>>var;
    cout<<endl;
    int result=0;
    int k =n;
    int temp=0;
    //for(int m=0; m<=n; m++)
    for(int j=0; j<=k; j++)
    {
        result+=pow(var,n)*array[n];
        n--;
    }
    cout<<"f("<<var<<")"<<" comes out to be "<<result<<endl;
    
    
}