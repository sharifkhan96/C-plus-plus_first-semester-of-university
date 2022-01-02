#include <iostream>

using namespace std;

int main()
{
	//1. First we will get students' multiple subjects marks
	//		and display them
	
	const int STUDENTS = 2;
	const int SUBJECTS = 3;
	int marks[STUDENTS][SUBJECTS];
	
	for(int i=0; i<STUDENTS; i++)
	{
		cout<<"**************************************\n";
		cout<<"\tStudent "<<i+1<<endl;
		cout<<"**************************************\n";
		for(int j=0; j<SUBJECTS; j++)
		{
			cout<<"Enter marks for subject "<<j+1<<" : ";
			cin>>marks[i][j];
		}
	}
	
	for(int i=0; i<STUDENTS; i++)
	{
		cout<<"**************************************\n";
		cout<<"\tStudent "<<i+1<<endl;
		cout<<"**************************************\n";
		for(int j=0; j<SUBJECTS; j++)
		{
			cout<<"Subject "<<j+1<<"\t"<<"Marks = "<<marks[i][j]<<endl;
		}
	}
	
	return 0;
}

