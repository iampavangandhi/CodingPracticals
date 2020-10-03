#include <iostream>
using namespace std;
void conjuction(int x[], int y[])
{
    cout<<"\t x \t y \t x^y"<<endl;
    for(int i=0; i<4; i++)
    {
        cout<<"\t "<<x[i]<<"\t "<<y[i]<<"\t "<<(x[i] & y[i])<<endl;
    }
    cout<<"\n\n";
}
void disjunction(int x[], int y[])
{
    cout<<"\t x \t y \t x v y"<<endl;
    for(int i=0; i<4; i++)
    {
        cout<<"\t "<<x[i]<<"\t "<<y[i]<<"\t "<<(x[i] | y[i])<<endl;
    }
    cout<<"\n\n";
}
void exclusiveor(int x[], int y[])
{
    cout<<"\t x \t y \t x ⊕ y"<<endl;
    for(int i=0; i<4; i++)
    {
        cout<<"\t "<<x[i]<<"\t "<<y[i]<<"\t "<<(x[i] ^ y[i])<<endl;
    }
    cout<<"\n\n";
}
void conditonal(int x[], int y[])
{
    cout<<"\t x \t y \t x -> y"<<endl;
    for(int i=0; i<4; i++)
    {
        cout<<"\t "<<x[i]<<"\t "<<y[i]<<"\t "<<((!x[i]) | y[i])<<endl;
    }
    cout<<"\n\n";
}
void biconditonal(int x[], int y[])
{
 cout<<"\t x \t y \t x <-> y\n"<<endl;
    for(int i=0; i<4; i++)
    {
        cout<<"\t "<<x[i]<<"\t "<<y[i]<<"\t "<<(x[i] == y[i])<<endl;
    }
    cout<<"\n\n";
}
void exclusivenor(int x[], int y[])
{
    cout<<"\t x \t y \t x XNOR y"<<endl;
    for(int i=0; i<4; i++)
    {
        cout<<"\t "<<x[i]<<"\t "<<y[i]<<"\t "<<!(x[i]^y[i])<<endl;
    }
    cout<<"\n\n";
}
void negation(int x[], int y[])
{
        cout<<"\t x \t y \t ~x \t ~y"<<endl;
    for(int i=0; i<4; i++)
    {
        cout<<"\t "<<x[i]<<"\t "<<y[i]<<"\t "<<!(x[i])<<"\t "<<!y[i]<<endl;
    }
    cout<<"\n\n";
}
void nand(int x[], int y[])
{
    cout<<"\t x \t y \t ~(x ^ y)\n"<<endl;
    for(int i=0; i<4; i++)
    {
        cout<<"\t "<<x[i]<<"\t "<<y[i]<<"\t "<<!(x[i] & y[i])<<endl;
    }
    cout<<"\n\n";
}
void nor(int x[], int y[])
{
        cout<<"\t x \t y \t ~(x v y)"<<endl;
    for(int i=0; i<4; i++)
    {
        cout<<"\t "<<x[i]<<"\t "<<y[i]<<"\t "<<!(x[i] | y[i])<<endl;
    }
    cout<<"\n\n";
}
int main()
{
    int x[4],y[4];
    cout<<"Enter truth values of x and y"<<endl;
    cout<<"x  y \n";
    for(int i=0; i<4; i++)
    {
        cin>>x[i]>>y[i];
    }
    conjuction(x,y);
    disjunction(x,y);
    exclusiveor(x,y);
    conditonal(x,y);
    biconditonal(x,y);
    exclusivenor(x,y);
    negation(x,y);
    nand(x,y);
    nor(x,y);
}