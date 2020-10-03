#include<iostream>
#include<math.h>
#include<fstream>
#include<string.h>
using namespace std;
	int main()
{
	keyWord();
}

	void KeyWord(ifstream &FileSearch)
{
     string letters;
     int position =-1;
     string line;
     ifstream readSearch;
     cout<<"enter search word ";
     cin>>letters;
     "\n";
     FileSearch.open("employee");
     if(FileSearch.is_open())
     { 
         while(getline(FileSearch, line))
         {
             FileSearch>>line;
             cout<<line<<endl;
             position=line.find(letters,position+1);
             if(position==string::npos);
             if(FileSearch.eof())
                 break;

             cout<<line<<endl;
         }

     }
     cout<<"Cant find"<<letters<<endl;
 }
