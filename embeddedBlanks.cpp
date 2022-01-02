#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	const int MAX = 80;
	char str[MAX];
	ifstream infile("chars.txt");
	while(infile)
	{
		infile.getline(str, MAX);
		cout<<str<<endl;
	}
	return 0;
}
