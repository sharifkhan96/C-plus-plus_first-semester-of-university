#include <iostream>

using namespace std;

int main()
{
	int lines;
	cout<<"Enter number of stars: ";
	cin>>lines;
	
	for(int i=0; i<lines; i++)
	{
		for(int j=0; j<=i; j++)
			cout<<"*";
			cout<<endl;
			
	}
	
	
	
	
	
	
	cout<<"\n\n\n\n\n\n";
	
	int line;
	cout<<"How many lines would you desire to print: ";
	cin>>line;
	
	for(int h=1; h<=line; h++)
	{
			for(int s=line; s>h; s--)
	
		cout<<"*";
		cout<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
