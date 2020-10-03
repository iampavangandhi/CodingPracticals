#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of vertices:\n";
    cin>>n;
    cout<<"\n\n";
    int array[n];
    for(int i=0; i<n; i++) array[i] = i+1;
    int matrix[n][n];
    for(int m=0; m<n; m++) 
    {
        for(int k=0; k<n; k++)
        {
            matrix[m][k]=0;
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
    int ind[n],outd[n];
    for(int y=0; y<n; y++)
    {
        ind[y]=0;
        outd[y]=0;
    }
    int tr1=0,tr2=0;
    for(int y1=0; y1<n; y1++){
    for(int s=0; s<n; s++)
    {
        ind[tr1] +=matrix[s][tr1];
        
    }
    tr1++;
    }
    for(int y2=0; y2<n; y2++){
        for(int s=0; s<n; s++)
    {
        outd[tr2] +=matrix[tr2][s];
        
    }
    tr2++;
    }
    
    cout<<"\t Vertices:  ";
    for(int u =0; u<n; u++) cout<<array[u]<<"  ";
    cout<<"\n\t InDegree:  ";
    for(int u =0; u<n; u++) cout<<ind[u]<<"  ";
    cout<<"\n\t OutDegree: ";
     for(int u =0; u<n; u++) cout<<outd[u]<<"  ";
     cout<<endl;
}
    
    
    
    