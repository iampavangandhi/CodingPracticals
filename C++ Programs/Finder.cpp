#include <iostream>
#include <fstream>
#include <string.h>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main(){
	int per=95;
	int f=0;
    string line;
	ifstream myfile ("finder.txt");
	
	while (!myfile.eof()) {
	getline(myfile,line);

	myfile>>f;
	cout<<"\t"<<f;
	if(per>=f)
	cout<<line<<"\n";
/*	if (line.length() == 0 || line[0] == ';')
		cout << "IGNORE LINE\n"; */
	else
		cout << "IGNORE\n";
	}
 	system("pause");
	return 0;
	}
/*	while(myfile.eof())
{
		myfile>>f;
		if(per>=f)
	{
		myfile>>l;
		cout<<l<<endl;
	}
		else
		cout<<endl;
}
	myfile.close();
	} */


