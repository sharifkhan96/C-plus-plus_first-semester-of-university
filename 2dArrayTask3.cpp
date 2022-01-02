#include <iostream>

using namespace std;

int main()
{
	//1. First we will get students' multiple subjects marks
	//		and display them
	//2. Then we will calculate each subject gpa
	//3. Finally, we will find the gpa of each student in a 
	//		semester
	// gpa = SUM(each subject gpa * credit hours)/total credit hours
	// array for credit hours, size will be SUBJECTS
	// array for semester gpa, size will be STUDENTS
	
	const int STUDENTS = 2;
	const int SUBJECTS = 3;
	int marks[STUDENTS][SUBJECTS];
	float subGpa[STUDENTS][SUBJECTS];
	float semGpa[STUDENTS];
	int crdHrs[SUBJECTS];
	
	for(int i=0; i<SUBJECTS; i++)
	{
		cout<<"Enter the credit hours for subject "<<i+1<<" : ";
		cin>>crdHrs[i];
	}
	int totalCrdHrs = 0;
	for(int i=0; i<SUBJECTS; i++)
		totalCrdHrs += crdHrs[i];
	
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
	float sum;
	for(int i=0; i<STUDENTS; i++)
	{
		sum = 0.0;
		cout<<"**************************************\n";
		cout<<"\tStudent "<<i+1<<endl;
		cout<<"**************************************\n";
		for(int j=0; j<SUBJECTS; j++)
		{
			if(marks[i][j] >= 87 && marks[i][j] <= 100)
				subGpa[i][j] = 4.0;
			else if(marks[i][j] >= 80 && marks[i][j] < 87)
				subGpa[i][j] = 3.5;
			else if(marks[i][j] >= 72 && marks[i][j] < 80)
				subGpa[i][j] = 3.0;
			else if(marks[i][j] >= 67 && marks[i][j] < 72)
				subGpa[i][j] = 2.5;
			else if(marks[i][j] >= 60 && marks[i][j] < 67)
				subGpa[i][j] = 2.0;
			else
				subGpa[i][j] = 0.0;
			cout<<"Subject "<<j+1<<"\t"<<"Marks = "<<marks[i][j]<<"\tGPA = "<<subGpa[i][j]<<endl;
			sum += subGpa[i][j]*crdHrs[j];
		}
		
		semGpa[i] = sum/totalCrdHrs;
		cout<<"Semester GPA = "<<semGpa[i]<<endl;
	}
	
	return 0;
}

