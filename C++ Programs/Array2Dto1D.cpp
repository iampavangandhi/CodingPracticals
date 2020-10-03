#include<iostream>
using namespace std;
int main()
{
	int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int b[16];
	for(int i=0,k=0;i<16;k++)
	{
		for(int j=0;j<4;j++)
		{
			b[i]=a[k][j];
			i++;
		}
	}
	for(int t=0;t<16;t++)
	cout<<b[t];
}
	
