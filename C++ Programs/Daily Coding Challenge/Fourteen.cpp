#include<bits/stdc++.h>
using namespace std;

void print(string a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int comb(string a[], int n)
{
	sort(a, a+n);
	cout<<"Possible Combinations : "<<endl;
	do{
		print(a,n);
	} while (next_permutation(a, a+n));
}

int main()
{
	string student[] = {"Ram", "Anuj", "Deepak", "Ravi"};
	
	int n = sizeof(student)/sizeof(student[0]);
	
	comb(student,n);
	
	return 0;
}
