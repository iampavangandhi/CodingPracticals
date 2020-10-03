#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
	 ifstream FileSearch;
     string letters;
     int position =-1;
     string line;
     ifstream readSearch;
     cout<<"enter search word ";
     cin>>letters;
     "\n";
     FileSearch.open("finder.txt");
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
