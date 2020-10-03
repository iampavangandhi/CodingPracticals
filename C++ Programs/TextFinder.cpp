#include<iostream>
using namespace std;
int main()
{
	int v=0;
	string line;
	getline(cin, line);
	for(int i=0;;i++)
	{
	if(line[i]=='\0')
	break;
	else if(line[i]=='g' && line[i+1]=='o' &&line[i+2]=='o'&&line[i+3]=='d')
	v++;
	else
	continue;

}
	cout<<v<<endl;
	
}
