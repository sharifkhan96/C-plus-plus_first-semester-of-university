#include<iostream>
using namespace std;

void isPrime(int);
int main()
{
	int value;
	cout<<"Enter a number: ";
	cin>>value;
	if(value<2)
		cout<<"Invalid input.\n";
	else
	isPrime(value);
	return 0;
}

void isPrime(int x)
{
	bool p = true;
	for(int i=2; i<x; i++)
	{
		if(x%i == 0)
		{
			p = false;
			break;
		}
	}
	if(p)
		cout<<x<<" is a prime number.\n";
	else
		cout<<x<<" is not a prime number.\n";
}
