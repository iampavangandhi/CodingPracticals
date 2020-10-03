#include<iostream>
using namespace std;
int main()
{
    cout<<"This Program prints the number of leaves in a m- ary tree with i intrenal vertices\n";
    int m,i,n,leaves;
    cout<<"Enter 'm' ";
    cin>>m;
    cout<<"Enter 'i' ";
    cin>>i;
    n = (m*i + 1)                                                                                                                  ;
    cout<<"Total number of  vertices = "<<n<<endl;
    leaves = ((m-1)*n + 1)/m;
    cout<<"Number of leaves =  "<<leaves<<endl;
}