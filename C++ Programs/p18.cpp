// to find a path from a to b of length k find (i,j)th element of matrix a^k;
#include<iostream>
using namespace std;
int main()
{
       int n;
       
    cout<<"Enter no of vertices:\n";
    cin>>n;
    int temp[n][n];
    cout<<"\n\n";
    int array[n];
    for(int i=0; i<n; i++) array[i] = i+1;
    int matrix[n][n];
    for(int m=0; m<n; m++) 
    {
        for(int k=0; k<n; k++)
        {
            matrix[m][k]=0;
            temp[m][k]=0;
        }
    }
    int a,b;
    do
    {
        cout<<"Enter edges ";
        cin>>a>>b;
        matrix[a-1][b-1]=1;
    }while(a!=-1 && b!=-1);
    cout<<"\n\n\t\t Adjacency Matrix \n\n\n";
    cout<<"  \t\t  ";
    
    for(int l=0; l<n; l++) cout<<array[l]<<" ";
    
    cout<<endl;
    
    for(int j=0; j<n; j++) 
    {
        cout<<"\t\t"<<array[j]<<" ";
        for(int p=0; p<n; p++)
        {
            cout<<matrix[j][p]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\nEnter the length of path ";
    int path;
    cin>>path;
    
    int matrix2[n][n];
        for(int m=0; m<n; m++) 
    {
        for(int k=0; k<n; k++)
        {
            matrix2[m][k]=0;
        }
    }

    for(int i1=0; i1<n; i1++)
    {
        for(int i2=0; i2<n; i2++)
        {
            for(int i3=0; i3<n; i3++)
            {
                matrix2[i1][i2]+=(matrix[i1][i3]*matrix[i3][i2]);
            }
        }
    }
    
    while(path-2){
        for(int i1=0; i1<n; i1++)
    {
        for(int i2=0; i2<n; i2++)
        {
            temp[i1][i2]=0;
            for(int i3=0; i3<n; i3++)
            {
                temp[i1][i2]+=matrix2[i1][i3]*matrix[i3][i2];
            }
        }
    }
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            {   
                matrix2[i][j]=temp[i][j];
            }
        }
        --path;
    }
    cout<<"\n\n\t  Resulting Matrix Matrix \n\n\n";
    cout<<"  \t\t  ";
    
    for(int l=0; l<n; l++) cout<<array[l]<<" ";
    
    cout<<endl;
    
    for(int j=0; j<n; j++) 
    {
        cout<<"\t\t"<<array[j]<<" ";
        for(int p=0; p<n; p++)
        {
            cout<<matrix2[j][p]<<" ";
        }
        cout<<endl;
    }
    int start,end;
    cout<<"Enter the edges ";
    cin>>start>>end;
    int number = matrix2[start-1][end-1];
    cout<<"\nNumber of path "<<number;
}