#include <iostream>

using namespace std;

int main()
{
	int fact;
	unsigned long long result = 1;
	cout<<"Enter a number to find its factorial: ";
	cin>>fact;
	if(fact == 0 || fact == 1)
		cout<<"Factorial of "<<fact<<" is "<<1;
	else if(fact > 1)
	{
		cout<<1;
		for(int i=2; i<=fact; i++)
		{
			result = result*i;
			cout<<" * "<<i;
		}
		cout<<endl;
		cout<<"Factorial of "<<fact<<" is "<<result;
	}
	else
		cout<<"Enter a valid value";

	
	
	
//	int t, fact=1, u;
//	cin>>u;
//	for(t=2; t<=u; t++)
//	fact*=t;
//	cout<<fact;
	
	
	
	return 0;
}
