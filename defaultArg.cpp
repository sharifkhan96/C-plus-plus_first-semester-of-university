#include <iostream>

using namespace std;
void line(char symbol='!', int total=20);
/*
{
	for(int i=0; i<total; i++)
	cout<<symbol;
	cout<<endl;
}
*/
int main()
{
	line();
	line('-');
	line(40);
	line('+', 70);
	return 0;
}

void line(char symbol, int total)
{
	for(int i=0; i<total; i++)
		cout<<symbol;
	cout<<endl;
}
