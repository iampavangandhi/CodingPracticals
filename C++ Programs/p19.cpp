#include<iostream>
using namespace std;
int main()
{
    
    int n;
    cout<<"Enter the total number of vertices    ";
    cin>>n;
    cout<<"\t\tEnter the adjacency \n";
    int matrix[n][n];
    
    for(int i=0; i<n; i++) 
        for(int j=0; j<n; j++)
            cin>>matrix[i][j];
    cout<<"The degre of Vertices are \n"; 
    //int m;
    //cin>>m;
    int array[n];
    for(int i=0; i<n; i++) array[i]=0;
    int y=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            array[y]+=matrix[y][j];
            
        }
        y++;
    }
    cout<<"Vertices are: ";
    for(int i=1; i<=n; i++) cout<<i<<' ';
    cout<<endl;
    cout<<"Degrees are:  ";
    for(int i=0; i<n; i++) cout<<array[i]<<" ";
    cout<<endl;
    int even=0,odd=0;
    for(int i=0; i<n; i++)
    {
        if(array[i]%2==0)
        {
            ++even;
        }
        else
        {
            ++odd;
        }
    }
    cout<<"Vertices with even degree "<<even<<endl;
    cout<<"Vertices with odd degree  "<<odd<<endl;
        if(even==n)
        {
            cout<<"Euler Circuit Exists for given graph\n";
        }
        else if(even==n-2 && odd==2)
        {
            cout<<"Euler path exists for given for given graph euler circuit doesnt exits\n";
        }
        else
        {
           cout<<"Both euler path and euler circuit doesnt exists\n"; 
        }
    
    
    
    
    
}