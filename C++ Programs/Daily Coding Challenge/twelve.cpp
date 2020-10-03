#include<iostream>
using namespace std;

int hcf(int a, int b)
{
	if(a==0)
	return b;
	
	if(b==0)
	return a;
	
	if(a==b)
	return a;
	
	if(a>b)
	return hcf(a-b, b);
	
	return hcf(a, b-a);
}

int hcfSecond(int a, int b)
{
	if(b==0)
	return a;
	
	return hcfSecond(b, a % b);
}

int main()
{
	int rbc = 5000000;
	int wbc = 8000;
	int ratio, ratioSecond;
	
	ratio = hcf(rbc, wbc); //FirstMethod
	ratioSecond = hcfSecond(rbc, wbc); //SecondMethod
	
	cout<<"Ratio is RBC/WBC is "<<rbc/ratio<<" : "<<wbc/ratio<<endl<<endl;
	
	cout<<"Ratio is RBC/WBC is "<<rbc/ratioSecond<<" : "<<wbc/ratioSecond<<endl<<endl;
	
}
