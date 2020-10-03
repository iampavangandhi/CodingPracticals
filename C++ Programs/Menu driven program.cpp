//MENU

#include<iostream>
using namespace std;
	void even(int x[5]) //CASE 1
{	for(int i=0;i<5;i++)
	if(x[i]%2==0)
	cout<<x[i]<<" is EVEN"<<endl;
}

	void odd(int x[5]) //CASE 2
{	for(int i=0;i<5;i++)
{
	if(x[i]%2!=0)
	cout<<x[i]<<" is ODD"<<endl;
}
}

	void adav(int x[5]) //CASE 3		
{	int ad=0;
	for(int i=0;i<5;i++)
	ad+=x[i];
	cout<<"ADDITION IS "<<ad<<endl;
	cout<<"AVERAGE IS "<<ad/5<<endl;
}

	void bigsmall(int x[5]) //CASE 4
{	int lar=x[0],smm=x[0];
	for(int i=1;i<5;i++)
{
	if(x[i]>lar)
	lar=x[i];
}
	cout<<lar<<" is BIGGEST"<<endl;
	for(int i=1;i<5;i++)
{
	if(smm>x[i])
	smm=x[i];
}
	cout<<smm<<" is SMALLEST"<<endl;
}

	void dupli(int x[5]) //CASE 5
{
	int n=5;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;++j)
		{
			if(x[i]==x[j])
			{
			 for(int o=j;o<n-1;o++)
			 x[o]=x[o+1];
			 n--;
			}	
		}		
	for(int k=0;k<n;k++)
	cout<<x[k]<<" ";
}

	void rev(int x[5]) //CASE 6
{
	for(int i=4;i>=0;i--)
	cout<<x[i];
}
	int main()
{
	int myarr[5];
	int a;
	enteragain:
	for(int i=0;i<5;i++)
	{	cout<<"PLEASE ENTER ";
		cin>>myarr[i];
	}
	cout<<"PRESS 1 FOR EVEN VALUES "<<endl;
	cout<<"PRESS 2 FOR ODD VALUES "<<endl;
	cout<<"PRESS 3 TO CALCULATE ADDITION & AVERAGE "<<endl;
	cout<<"PRESS 4 TO FIND MIN & MAX "<<endl;
	cout<<"PRESS 5 TO REMOVE DUPLICATE NO. "<<endl;
	cout<<"PRESS 6 TO REVERSE "<<endl;
	cout<<"PRESS 7 REENTER THE ARRAY "<<endl;
	cout<<"PRESS 8 EXIT "<<endl;
	cout<<endl;
	pressagain:
	cin>>a;
	cout<<endl;

	switch(a)
{
	case 1: odd(myarr);break;
	case 2: even(myarr);break;
	case 3: adav(myarr);break;
	case 4: bigsmall(myarr);break;
	case 5: dupli(myarr);break;
	case 6: rev(myarr);break;
	case 7: goto enteragain;
	case 8: exit(1);
	default:cout<<"error"<<endl<<"PRESS AGAIN ";
	goto pressagain;
}
}












