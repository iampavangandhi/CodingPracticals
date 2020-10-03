#include<iostream>
#include<math.h>
#include<fstream>
#include<string.h>
using namespace std;
	
	class college
{
	private:
		
		int seatgen;
		int seatobc;
		int seatsc;
		int seatst;
		int totalseats;	
			
	public:
		
		col() //LIST OF COLLEGE
	{
		string line;
		ifstream myfile ("super_list.txt");
		if(myfile.is_open())
		{
			while ( getline(myfile, line)  )
			{
				cout<<line<<endl;
			}
		myfile.close();
		}
		else
		cout<<"NOT FOUND";
		return 0;
	
	}
	
		course() //LIST OF COURSES
	{
		string line;
	ifstream myfile ("courses.txt");
	if(myfile.is_open())
	{
		while ( getline(myfile, line)  )
		{
			cout<<line<<endl;
		}
	myfile.close();
	}
	else
	cout<<"NOT FOUND";
	return 0;
	}
	
		seats() //SEATS
	{
		seatgen=50;
		seatobc=20;
		seatsc=10;
		seatst=10;
		totalseats=seatgen+seatobc+seatsc+seatst;
	
			cout<<"	GEN : "<<seatgen<<"\n"<<"	OBC: "<<seatobc<<"\n";
			cout<<"	SC : "<<seatsc<<"\n"<<"	ST: "<<seatst<<"\n";			
	}
		
};

	class apply
{	
	private:
		
		char name[];
		char category[];
		char stream[];
		char gender,ch;
		int eng, hin, sub1, sub2, sub3, check;
		double percentage; 
		
	public:
		
		app()
	{
		ofstream myfile("supreme.txt", ios::app);
		cout<<"  PLEASE ENTER YOUR NAME : ";
		cin.ignore();
		cin.getline(name,30);
		myfile<<endl<<"----------------------------------------------------"<<endl;
		myfile<<"----------------------------------------------------"<<endl;
		myfile<<endl<<"NAME : "<<name<<endl;
	
		cout<<"  ENTER GENDER (M/F) : ";
		cin>>gender;
		myfile<<"GENDER : "<<gender<<endl;
	
		cout<<"  ENTER YOUR CATEGORY "<<endl;
		cout<<"  ( GEN  /  OBC  /  SC  /  ST ) : ";
		cin.ignore();
		cin.getline(category,10);
		myfile<<"CATEGORY : "<<category<<endl;
		cout<<endl;
	
		cout<<"  ENTER YOUR STREAM "<<endl;
		cout<<"  ( SCI  /  COM  /  ARTS ) : ";
		cin.getline(stream,10);
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
		cout<<endl;
		myfile<<"MATH / BUSS.ST. / POL.Sc MARKS - "<<sub3<<endl;
		
		percentage=0;
		percentage=((eng+sub1+sub2+sub3)/4);
		cout<<"  Your Percentage is : "<<percentage<<" %";
		myfile<<"PERCENTAGE : "<<percentage<<" %"<<endl;
		myfile.close();
		
		char s[]="sci";
		char c[]="com";
		char a[]="arts";
		
		check = strcmp(stream, s); 
	
	if (check==0) 
		cout<<"SCIENCE"; 
		
		check = strcmp(stream, c); 
	
	if (check==0) 
		cout<<"COMMERCE";
		
		check = strcmp(stream, a); 
	
	if (check==0) 
		cout<<"ARTS"; 
	
	}
	
};

	int main()
{
	int a;
	cout<<endl<<endl;
	cout<<"		   -------------------------------------"<<endl;
	cout<<"		       	WELCOME TO DELHI UNIVERSITY"<<endl;
	cout<<"		   -------------------------------------";
	cout<<endl<<endl<<endl;
	startmenu:
	cout<<endl;
	
	cout<<"  -------------------------------------";
	cout<<"------------------------------------"<<endl;
	cout<<"  (1) List of Colleges					";
	cout<<"(2) List of Courses"<<endl<<endl;
	cout<<"  (3) Number of Seats				";
	cout<<"	(4) Apply for Admission"<<endl;
	cout<<"  -------------------------------------";
	cout<<"------------------------------------"<<endl<<endl<<endl;
	
	cout<<"  Press Respective Choice : ";
	cin>>a;
	cout<<endl<<endl;
	college c1,c2,c3;
	apply a1;
	
	
	switch(a)
{
	case 1: c1.col();
	goto startmenu; 
	case 2: c2.course();
	goto startmenu;
	case 3: c3.seats();
	goto startmenu;
	case 4: a1.app();break;
	default : cout<<"	Error : PLEASE ENTER CORRECT INPUT"<<endl;
	goto startmenu;
}


}
