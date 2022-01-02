#include <iostream>
using namespace std;
void line();
void line(int total);
void line(char symbol);
void line(char symbol, int total);
//char line(char symbol, int total); 
int main()
{
	line();
	line(30);
	line('-');
	line('#', 50);
	return 0;
}

void line()
{
	for(int i=0; i<20; i++)
		cout<<"*";
	cout<<endl;
}

void line(int total)
{
	for(int i=0; i<total; i++)
		cout<<"*";
	cout<<endl;
}

void line(char symbol)
{
	for(int i=0; i<20; i++)
		cout<<symbol;
	cout<<endl;
}

void line(char symbol, int total)
{
	for(int i=0; i<total; i++)
		cout<<symbol;
	cout<<endl;
}

