#include<iostream>
using namespace std;
int main()
{
	int count = 0; // Variable tracking number of required words in input sentence
	string line;
	string word = "good";
	getline(cin, line);

	int wordlen = word.length();
	for(int i=0; i < line.length() - wordlen; i++) {
		if(line[i]=='\0')
			break;
		else if (line[i] != word[0])
			continue;
		else if(line.substr(i, wordlen).compare(word) == 0)
			count++;
	}
	cout<<count<<endl;
}
