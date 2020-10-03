#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>
using namespace std;

class Colleges{
	
	//variables
	private:
		char clgName[100];
		int seatOBC;
		int seatSC;
		int seatGEN;
		int seatST;
		int totalSeats;
		int wom;
		
	public:
		
		colleges(){
			seatOBC=20;
			seatSC=10;
			seatST=10;
			seatGEN=50;
			totalSeats=seatOBC+seatGEN+seatSC+seatST;
			wom=0;
		}			
		
		
		showSeats(){
			cout<<"GEN: "<<seatGEN<<"\n"<<"OBC: "<<seatOBC<<"\n";
			cout<<"SC: "<<seatSC<<"\n"<<"ST: "<<seatST<<"\n";			
		}
		
	
		showClgInfo(){
			
			ifstream fin;
			fin.open("C:/Users/Twinkle khan/Desktop/File handling files/clgNames.txt");
			char ch;
			fin.get(ch);
			while(!fin.eof()){
				cout<<ch;
				if(ch=='\n')
			    	showSeats();
				
				fin.get(ch);
			}
			fin.close();
		}

};

class User{
	
	char name[30];
	int age;
	char sex[1];
	
	public:
	User(){
	
	}
	
	createUser(){
		cout<<"Enter your Name: ";
		cin.ignore();
		cin.getline(name,29);
		cout<<"\nEnter your age: ";
		cin>>age;
		cout<<"\nEnter your sex(M/F): ";
		cin.ignore();
		cin.getline(sex,1);
	}
	
	storeUser(){
		ofstream fout;
		fout.open("C:/Users/Twinkle khan/Desktop/File handling files/UserDetails.txt"
		,ios::app);
		fout.write((char*)this,sizeof(*this));
		fout<<"\n";
		fout.close();
	}

	
	
	
};

void start(){
		Colleges obj;
	
		User user;
		
		int choice;
	cout<<setw(10)<<"Welcome to Delhi University Admission Portal System\n";
	cout<<"What do you want to do?\n";
	cout<<"Press 1 for entering your details to take admission\n";
	cout<<"Press 2 for viewing the total number of available seats in all the colleges\n";
	cin>>choice;
	switch (choice){
	
		case 1:
			user.createUser();
			user.storeUser();
			break;
		case 2:
			obj.showClgInfo();	
			break;	
		default:
			cout<<"Please enter valid response\n";
			break;	
	}
}

void registration(){
	
	cout<<"What course do you want to register for?\n";
	
	
}


int main(){

	
	start();
	registration();
	
	
	return 1;
}
