#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	//in case of binary files
	//write() to store data
	//read() to read data
	int x = 2;
	ofstream outfile("data.dat", ios::binary);
	//cast the data to a character pointer using (char*)
	outfile.write((char*)&x, sizeof(int));
	outfile.close();
	int y;
	ifstream infile("data.dat", ios::binary);
	infile.read((char*)&y, sizeof(int));
	cout<<y<<endl;
	infile.close();
	return 0;
}
