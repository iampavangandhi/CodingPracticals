#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>
using namespace std;

class Colleges{
	
	//variables
	public:
		char clgName[100];
		int seatOBC[3];
	//	int seatSC;
		int seatGEN[3];
	//	int seatST;
		int totalSeats[3];
		int wom;
		char courseName[3][50];
		
		int marksOBC[3];
		int marksGEN[3];
		//cutoff
		//course name
	
		
		//marks required in each category
		
		
	public:
		
		Colleges(){
			strcpy(clgName,"no name");
			seatOBC[0]=20;
			seatOBC[1]=20;
			seatOBC[2]=20;
			seatGEN[0]=30;
			seatGEN[1]=30;
			seatGEN[2]=30;
			
			totalSeats[0]=seatOBC[0]+seatGEN[0];
			totalSeats[1]=seatOBC[1]+seatGEN[1];
			totalSeats[2]=seatOBC[2]+seatGEN[2];
	
			marksOBC[0]=88;
			marksOBC[1]=89;
			marksOBC[2]=77;

			marksGEN[0]=92;
			marksGEN[1]=95;
			marksGEN[2]=96;
			
			wom=0;
			
			strcpy(courseName[0],"Bsc Computer Science");
			strcpy(courseName[1],"Bsc Stats Hons");
			strcpy(courseName[2],"B.Com Hons");
			
		}
		
		
		getClg(){
			
			cout<<"Press 1 for women clg 0 if not";
			cin>>wom;
			cout<<"Enter college name\n";
			cin.ignore();
			cin.getline(clgName,100);
						

		}
		
		
		showClg(){
			
			
			cout<<clgName<<endl;
			cout<<courseName[0]<<endl;
			cout<<"OBC(marks req) "<<marksOBC[0]<<endl;
			cout<<"Seats available for OBC for this course: "<<seatOBC[0]<<endl;
			cout<<"GEN(marks req) "<<marksGEN[0]<<endl;
			cout<<"Seats available for GEN for this course: "<<seatGEN[0]<<endl;
			
			
			
			
			cout<<courseName[1]<<endl;
			cout<<"OBC(marks req) "<<marksOBC[1]<<endl;
			cout<<"Seats available for OBC for this course: "<<seatOBC[1]<<endl;
			cout<<"GEN(marks req) "<<marksGEN[1]<<endl;
			cout<<"Seats available for GEN for this course: "<<seatGEN[1]<<endl;
			

			
			cout<<courseName[2]<<endl;
			cout<<"OBC(marks req) "<<marksOBC[2]<<endl;
			cout<<"Seats available for OBC for this course: "<<seatOBC[2]<<endl;
			cout<<"GEN(marks req) "<<marksGEN[2]<<endl;
			cout<<"Seats available for GEN for this course: "<<seatGEN[2]<<endl;
			
			cout<<"\n\n";
	
		}
		
		showCourses(){
			
			cout<<"\n1."<<courseName[0];
			cout<<"\n2."<<courseName[1];
			cout<<"\n3."<<courseName[2];
		}

	};
	
		
void registration();


int bestfour(int m1,int m2,int m3,int m4,int m5){
	
	
	int bestmarks;

	bestmarks=(m1+m2+m3+m4)/4;
	
	
	return bestmarks;
	
}


void registration(){
		int myChoice=0;
	

	Colleges c[3];
	strcpy(c[0].clgName,"Hansraj");
	strcpy(c[1].clgName,"Ramanujan");
	strcpy(c[2].clgName,"Deshbandhu");
	int mz;
	cout<<"Select your stream\n";
	cout<<"1.Science\n";
	cout<<"2.Commerce\n";
	cout<<"3.Humanities\n";
	cin>>mz;
int marksSub1,marksSub2,marksSub3,marksSub4,marksSub5;
	switch(mz){
		
		case 1:
			cout<<"Enter your marks\n";
			cout<<"Physics: ";
			cin>>marksSub1;
			cout<<"Chemistry: ";
			cin>>marksSub2;		
			cout<<"Maths: ";
			cin>>marksSub3;
			cout<<"English: ";
			cin>>marksSub4;
			cout<<"Other Subject: ";
			cin>>marksSub5;
			break;
		
		case 2:
			cout<<"Enter your marks\n";
			cout<<"Maths: ";
			cin>>marksSub1;
			cout<<"Economics: ";
			cin>>marksSub2;		
			cout<<"Business Studies: ";
			cin>>marksSub3;
			cout<<"English: ";
			cin>>marksSub4;
			cout<<"Other Subject: ";
			cin>>marksSub5;
			break;
			
		case 3:
			cout<<"Enter your marks\n";
			cout<<"Hindi: ";
			cin>>marksSub1;
			cout<<"History: ";
			cin>>marksSub2;		
			cout<<"Political Science: ";
			cin>>marksSub3;
			cout<<"English: ";
			cin>>marksSub4;
			cout<<"Other Subject: ";
			cin>>marksSub5;

			break;
	}
	

	int best4=bestfour(marksSub1,marksSub2,marksSub3,marksSub4,marksSub5);
	cout<<"Your best of four marks are: ";
	cout<<best4;
	
	cout<<endl<<"What course do you want to register for?\n";
	c[0].showCourses();
	cout<<endl;
	cin>>myChoice;
		char caste[20];
			cout<<" Enter Your Category(OBC or GENERAL): ";
			cin>>caste;
int flag=0;
	switch (myChoice){
		
		case 1:
		
			cout<<"You can take admission in: ";
			for(int i=0;i<3;i++)
			{           
			if(strcmpi(caste,"OBC")==0){
				if(c[i].marksOBC[0]<=best4)
				{flag++;
					cout<<endl<<flag<<c[i].clgName;
				}
			}
			
				if(strcmpi(caste,"GENERAL")==0)
				if(c[i].marksGEN[0]<=best4){
					flag++;
					cout<<endl<<"You can take admission in: "<<c[i].clgName;
				}
			}
			if(flag==0)
			cout<<endl<<" in non of our College";
			
			break;
		
		case 2:
			{
				cout<<"You can take admission in: ";
				for(int i=0;i<3;i++)
			{
			
			if(!strcmp(caste,"OBC")){
				if(c[i].marksOBC[1]<=best4){
				flag++;
				cout<<endl<<flag<<"."<<c[i].clgName;
				}
			}
			
				if(!strcmp(caste,"GENERAL")){
				if(c[i].marksGEN[1]<=best4){
					flag++;
					cout<<endl<<flag<<"."<<c[i].clgName;
				}
			}
		}
			if(flag==0)
			cout<<endl<<"in none of our college";
			break;
		}
		
		case 3:
			{
				cout<<"You can take admission in: ";
				for(int i=0;i<3;i++)
			{
			
			if(!strcmp(caste,"OBC")){
				if(c[i].marksOBC[2]<=best4){
				flag++;
				cout<<endl<<flag<<"."<<c[i].clgName;
				}
			}
			
				if(!strcmp(caste,"GENERAL")){
				if(c[i].marksGEN[2]<=best4){
					flag++;
					cout<<endl<<flag<<"."<<c[i].clgName;
				}
			}
		}
			if(flag==0)
			cout<<endl<<"in none of our college";
			break;
		}
		default:
			break;
	}
if(flag!=0)
{
	char clgchoice[30];
	cout<<endl<<"Enter College name to take admission:- ";
	cin>>clgchoice;
	
	for(int i=0;i<3;i++)
	{
		if(strcmpi(clgchoice,c[i].clgName)==0)
		{
			cout<<endl<<"Padharo Mare desh";
			if(strcmpi(caste,"GENERAL")==0)
			{c[i].seatGEN[myChoice-1]=-1;
			}
			else
			if(strcmpi(caste,"OBC")==0)
			{c[i].seatOBC[myChoice-1]--;
			}
		}
		
	}
	
	
	
}
	

		
}


int main(){

	registration();
	
	
	return 1;
}
