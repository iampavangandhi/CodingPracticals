#include<iostream>
using namespace std;
void bubble_sort(int list[], int n);
void bubble_sort(int list[], int n)
{
  int c, d, t;
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (list[d] > list[d+1])
      {
        /* Swapping */

        t         = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
      }
    }
  }
}
int main()
{
    int n;
        bool reflexive=0;
        bool symmetric=0;
        bool transitive=0;

    cout<<"Enter the number of elemnts in your set\n";
    cin>>n;
    int array[n];

    cout<<"Enter the elements of the set\n";
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    bubble_sort(array,n);
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
        int c,d;
        cout<<"Enter the edges (-1 -1 to exit )";

        cin>>a>>b;
           for (c = 0; c < n; c++)
   {
      if (array[c] == a)     /* if required element found */
      {
         break;
      }
   }
    for (d = 0; d < n; d++)
   {
      if (array[d] == b)     /* if required element found */
      {
         break;
      }
   }

        matrix[c][d]=1;
    }while(a!=-1 && b!=-1);

    cout<<"Adjacency matrix is: \n";
    cout<<"  ";
    for(int y=0; y<n; y++)
    {
        cout<<array[y]<<" ";
    }
    cout<<endl;
        for(int m=0; m<n; m++)
    {
        cout<<array[m]<<" ";

        for(int k=0; k<n; k++)
        {
            cout<<matrix[m][k]<<" ";
        }
        cout<<endl;
    }
        for(int m=0; m<n; m++)
    {
        for(int k=0; k<n; k++)
        {
            if(matrix[m][k]==matrix[k][m])
            {
                symmetric=true;
            }
        }

            if (matrix[m][m]==1)
            {
                reflexive=true;
            }

    }
    if (reflexive==1){
        cout<<"The relation is Reflexive : "<<endl;
    }
    if (symmetric==1){
        cout<<"The relation is symmetric : "<<endl;
    }



}