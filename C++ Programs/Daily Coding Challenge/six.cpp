#include<iostream>
using namespace std;

int main()
{
	int f,u,o,n;
	
	cin>>f>>u>>o>>n;

	u=u-o;
	f=f+o;
	f=f-n;
	u=u+n;
	
	cout<<"FREE: "<<f<<" "<<"USED: "<<u;
}
