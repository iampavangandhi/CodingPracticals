#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
void bubble_sort(int list[], int n)
{
  if(n==1) return;
  for(int i=0; i<n-1; i++) if(list[i]>list[i+1]) swap(list[i],list[i+1]);
  bubble_sort(list,n-1);
}
int main()
{
  int n;
  cout<<"Enter the total no of elements in the array :\n";
  cin>>n;
  int array[n];
  for(int i = 0; i<n; i++) cin>>array[i];
  bubble_sort(array,n);
  for(int j = 0; j<n; j++) cout<<array[j]<<" ,";
  cout<<endl;
  return 0;
}
 
