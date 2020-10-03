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
    int edge=0;
        for(int m=0; m<n; m++) 
    {
        for(int k=0; k<n; k++)
        {
            if(matrix[m][k]==1) ++edge; 

        }
    }
    for(int t=0;t<n;t++)
    {
    	matrix[t][t]=1;
	}
    for(int f=0;f<n;f++)
    	
    {
    	for(int o=0;o<n;o++)
    	{
			if (matrix[f][o]>=1)
    		cout<<"\n\n\t\tGraph is Complete\n";
    		else break;
		}
	}
    /* if(edge ==2*n)
    {
        cout<<"\n\n\t\tGraph is Complete\n";
    }
    
    else
    cout<<"\n\n\t\tThis is not a Complete Graph \n\n\n\n";
*/
}

