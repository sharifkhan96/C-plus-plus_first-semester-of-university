#include <iostream>
using namespace std;

int main()
{
	int size = 3;
	float grade[size];
//	grade[0] =  25;
//	grade[1] = 23;
//	grade[2] = 19;
//	cout<<grade[0]<<endl;
//	cout<<grade[1]<<endl;
//	cout<<grade[2]<<endl;

	for(int i=0; i<size; i++)
	{
		cout<<"Enter grade for student "<<i+1<<" : ";
		cin>>grade[i];
	}
	
	float total = 0.0, avg;
//	total = grade[0] + grade[1] + grade[2];
	
	for(int i=0; i<size; i++)
	{
		cout<<grade[i]<<endl;
		total = total + grade[i];
	}
	avg = total/size;
	
	cout<<"Average: "<<avg;
	
	
	return 0;
}
