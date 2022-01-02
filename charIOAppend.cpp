#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	//get() to read a character
	//put() to store a character
	
	string str = "A new line\n";
	ofstream outfile("data.txt", ios::app);
	for(int i=0; i<str.length(); i++)
		outfile.put(str.at(i)); //str[i]
	outfile.close();
	
	char c;
	ifstream infile("data.txt");
	while(infile)
	{
		infile.get(c);
		cout<<c;
	}
	infile.close();
	return 0;
}
