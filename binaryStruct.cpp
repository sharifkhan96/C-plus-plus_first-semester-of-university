#include <iostream>
#include <fstream>

using namespace std;

struct employee{
	int deptNo;
	char name[30];
	float salary;
};
int main()
{
	//in case of binary files
	//write() to store data
	//read() to read data
	employee emp = {1, "Aman Ullah", 55};
	ofstream outfile("data.dat", ios::binary | ios::app);
	//cast the data to a character pointer using (char*)
	outfile.write((char*)&emp, sizeof(employee));
	outfile.close();

	employee e;
	ifstream infile("data.dat", ios::binary);
	while(infile.read((char*)&e, sizeof(employee)))
	{
		cout<<"Dept No: "<<e.deptNo<<endl;
		cout<<"Name: "<<e.name<<endl;
		cout<<"Salary: "<<e.salary<<endl;
	}
	infile.close();
	return 0;
}
