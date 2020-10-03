#include <iostream>
#include <iomanip>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void printArr(int a[],int n)
{

    cout<<"\t";
    for (int i=0; i<n; i++)
        cout <<setw(4)<<a[i];
    cout<<"\n";
}
 
// Generating permutation using Heap Algorithm
void Permutation(int a[], int size, int n)
{
    // if size becomes 1 then prints the obtained
    // permutation
    if (size == 1) printArr(a,n);
    
 
    for (int i=0; i<size; i++)
    {
        Permutation(a,size-1,n);
 
        // if size is odd, swap first and last
        // element
        if (size%2==1) swap(a[0], a[size-1]);
 
        // If size is even, swap ith and last
        // element
        else swap(a[i], a[size-1]);
    }
}
int main()
{
    cout<<"Enter the no of digits :"<<endl;
    long n;
    cin>>n;
    int array[n];
    cout<<"Enter the digits"<<endl;
    for(int i=0; i<n; i++) cin>>array[i];
    cout<<"\t Possible Permutations Are \n\n";
    Permutation(array,n,n);
}

