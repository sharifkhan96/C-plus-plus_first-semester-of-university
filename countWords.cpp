#include <iostream>
#include <fstream>

using namespace std;
int countWords(char file[]);
int main()
{
	char name[] = "data.txt";
	int count = countWords(name);
	cout<<"Total words = "<<count<<endl;
	return 0;
}

int countWords(char file[]){
	char c;
	ifstream infile(file);
	int count = 1;
	while(infile.get(c))
	{
		if(c == ' ')
			count++;
	}
	return count;
}
