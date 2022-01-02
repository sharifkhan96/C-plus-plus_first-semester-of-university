#include <iostream>
#include <cstring>
using namespace std;

void insertChar(char str[], int size, int c, int position);

int main()
{
	
	
	
	
	const int max=90;
	char value[max];
	cout<<"enter your name: ";
	cin>>value;
	insertChar(value, strlen(value)'n');
	
	
	return 0;
}

void insertChar(char str[], int size, int c, int position)
{
	for(int i=size; i>=position; i--)
	{
		str[i+1]=str[i];
		str[position]=c;
	}
}
