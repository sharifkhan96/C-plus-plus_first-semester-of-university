#include <iostream>
using namespace std;
unsigned int rFact(int n);
int main()
{
	int num;
	cout<<"Enter any num for finding the factorial via recursion: ";
	cin>>num;
	
	cout<<"Factorial of "<<num<<" is: "<<rFact(num);
	return 0;
}

unsigned int rFact(int n)
{
	//base case
	if(n == 1)
		return 1;
	//general case
	return n*rFact(n-1);
}
