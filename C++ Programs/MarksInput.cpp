#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	string name;
	string category;
	string stream;
	char gender,ch;
	int eng, hin, sub1, sub2, sub3; 
	
	ofstream myfile;
	myfile.open("supreme.txt");
	
	cout<<"  PLEASE ENTER YOUR NAME : ";
	getline(cin, name);
	myfile<<"NAME : "<<name<<endl;
	
	cout<<"  ENTER GENDER (M/F) : ";
	cin>>gender;
	myfile<<"GENDER : "<<gender<<endl;
	
	cout<<"  ENTER YOUR CATEGORY "<<endl;
	cout<<"  ( GEN  /  OBC  /  Sc/St ) : ";
	cin>>category;
	myfile<<"CATEGORY : "<<category<<endl;
	cout<<endl;
	
	cout<<"  ENTER YOUR STREAM "<<endl;
	cout<<"  ( SCIENCE  /  COMMERCE  /  ARTS ) : ";
	cin>>stream;
	myfile<<"STREAM : "<<stream<<endl<<endl;
	cout<<endl;
	
	cout<<"  ENTER ENGLISH MARKS : ";
	cin>>eng;
	myfile<<"ENGLISH MARKS - "<<eng<<endl;
	
	cout<<"  ENTER HINDI / 2nd SUB MARKS : ";
	cin>>hin;
	myfile<<"HINDI / 2nd SUB MARKS - "<<hin<<endl;
	
	cout<<"  ENTER PHY / ACC /GEO MARKS : ";
	cin>>sub1;
	myfile<<"PHY / ACC /GEO MARKS - "<<sub1<<endl;
	
	cout<<"  ENTER CHEM / ECO / HIS MARKS : ";
	cin>>sub2;
	myfile<<"CHEM / ECO / HIS MARKS - "<<sub2<<endl;
	
	cout<<"  ENTER MATH / BUSS.ST. / POL.Sc MARKS : ";
	cin>>sub3;
	myfile<<"MATH / BUSS.ST. / POL.Sc MARKS - "<<sub3<<endl;
	
}
