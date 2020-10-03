#include<iostream>
#include<math.h>
using namespace std;
int ismember(int *arr, int n);
void power_set(int *, int);
void rmDup(int array[]);
int size;
int main()
{
    cout<<"Enter the number of elements of the set :- \n";
    cin>>size;
    int array[size];
    
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    rmDup(array);
    cout<<"Enter the number You want to check;-\n";
    int m;
    cin>>m;
    int in;
    in = ismember(array, m);
    
    if(in!=0)
        cout<<"False\n";
    else
        cout<<"True\n";
        
        cout<<"{ ";
        
        power_set(array, size); // call power set function;
        
        cout<<" }\n";
}
   // function to check whether an elemtn exists in the array
    int ismember(int arr[], int n)
    {
        for(int i=0; i<size; i++)
        {
            if(n==arr[i])
            {
                return 0;
                break;
            }
        }
    }
    
	// function to print powerset of a set
	void power_set(int *arr, int m)
	{
	    cout<<"Power set:-\n";
	    int size = pow(2,m);
	    for(int counter=0; counter<size; counter++)
	    {
	        cout<<"{ ";
	        for(int h=0; h<m; h++)
	        {
	            
	            if(counter & (1<<h))
	            {
	                cout<<arr[h]<<" ";
	            }
	            
	        }
	     cout<<" } ";
	    }
	}
	  
  void rmDup(int array[])
{
   for(int i=0;i<size;i++)
{
    for(int j=i+1;j<size;)
    {
        if(array[i]==array[j])
        {
            for(int k=j;k<size;k++)
            {
                array[k]=array[k+1];

            }
            size--;
        }
        else
            j++;
    }
}
}
    
