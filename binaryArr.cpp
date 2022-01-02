#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	//in case of binary files
	//write() to store data
	//read() to read data
	const int MAX = 5;
	int data[MAX] = {77, 87, 90, 56, 78};
	ofstream outfile("data.dat", ios::binary);
	//cast the data to a character pointer using (char*)
	outfile.write((char*)data, MAX * sizeof(int));
	outfile.close();
	int rData[MAX];
	ifstream infile("data.dat", ios::binary);
	infile.read((char*)rData, MAX*sizeof(int));
	for(int i=0; i<MAX; i++)
		cout<<rData[i]<<endl;
	infile.close();
	return 0;
}
