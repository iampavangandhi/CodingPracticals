#include <iostream>
#include <math.h>
using namespace std;
void tower(int ,char,char,char);
int main()
{
    cout<<"Enter the number of discs "<<endl;
    int n;
    cin>>n;
    tower(n,'A','C','B');
    cout<<"toal number of steps "<<(pow(2,n)-1)<<endl;
    
}
void tower(int n, char from, char to, char aux)
{
    
    if (n==1)
    {
    cout<<"Move 1 From "<<from<<" to "<<to<<endl;
    return;
    }
    else
    {
    tower(n-1,from,aux,to);
    
    cout<<"Move "<<n<<" From "<<from<<" to "<<to<<endl;
    tower(n-1,aux,to,from);
    }
    
}