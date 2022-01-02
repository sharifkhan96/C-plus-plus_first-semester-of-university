#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char c;
	ifstream infile("data.txt");
	int count = 0;
	while(infile.get(c))
	{
		if(isalpha(c))
			count++;
	}
	cout<<"Total alphabets = "<<count<<endl;
	return 0;
}
