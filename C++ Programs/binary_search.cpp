#include <iostream>
using namespace std;
int binarysearch(int arr[], int l,int r, int x);
int main()
{
    int array[] = {1,2,3,4,5,6,7,9};
    int n = sizeof(array)/sizeof(array[0]);
    int x = 2;
    int result = binarysearch(array,0,n-1,x);
    if (result==-1) cout<<x<<" is not present in the array"<<endl;
    else
	cout<<x<<" is pressent at "<<result<<" index";
}
int binarysearch(int arr[], int l,int r, int x)
{
    if(r>=l)
    {
    int mid = l +(r-1)/2;
    if(arr[mid]==x)return mid;
    if(arr[mid]>x)return binarysearch(arr,l,mid-1,x);
     return binarysearch(arr,mid+1,r,x);   //else return;
    }
    else
    return -1;
}
