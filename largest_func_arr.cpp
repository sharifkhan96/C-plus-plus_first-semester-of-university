#include <iostream>
using namespace std;
//Sharif Ullah Danish

void largest(int gvalue[]);

int main()
{
	
	
	int n;
	
	int gvalue[50];
	
	cout<<"ENter how many times do you want it: ";
	cin>>n;
	
	for(int i=0; i<n; ++i)
	{
		cout<<"Enter g value: ";
		cin>>gvalue[i];
	}
	
	largest(gvalue);
	
	
	return 0;
	
}

void largest(int gvalue[50], int n, int value)
{
	
	for(int j=1; j<n; ++j)
	{
		if(gvalue[0] < gvalue[j])
		gvalue[0] = gvalue[j];
	}
	
	for(int i=1; i<n; ++i)
	cout<<"Largest is: "<<gvalue[i];
}
