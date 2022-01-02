#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	//in case of binary files
	//write() to store data
	//read() to read data
	const int MAX = 5;
	int data[MAX] = {4, -1, 99, 33, 12};
	ofstream outfile("data.dat", ios::binary | ios::app);
	//cast the data to a character pointer using (char*)
	outfile.write((char*)data, MAX * sizeof(int));
	outfile.close();
//	int rData[MAX];
//	ifstream infile("data.dat", ios::binary);
//	while(infile.read((char*)rData, MAX*sizeof(int)))
//	{
//		for(int i=0; i<MAX; i++)
//			cout<<rData[i]<<endl;
//	}
	int d;
	ifstream infile("data.dat", ios::binary);
	while(infile.read((char*)&d, sizeof(int)))
	{
		cout<<d<<endl;
	}
	infile.close();
	return 0;
}
