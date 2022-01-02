#include <iostream>
#include <fstream>

using namespace std;
int countWords(char file[]);
int main()
{
	char name[] = "STORY.txt";
	int count = countWords(name);
	cout<<"Total the's = "<<count<<endl;
	return 0;
}

int countWords(char file[]){
	string word;
	ifstream infile(file);
	int count = 0;
	while(infile>>word)
	{
		if(word == "the")
			count++;
	}
	return count;
}
