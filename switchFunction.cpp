#include <iostream>
using namespace std;
float calculate(float, float, char);
int main()
{
	float x, y, result;
	char op;
	cout<<"Enter a value, operator and a value: \n";
	cin>>x>>op>>y;
	switch(op)
	{
		case '+':
		case '-':
		case '*':
		case '/':
			result = calculate(x, y, op);
			cout<<result<<endl;
			break;
		default:
			cout<<"Incorrect operator.\n";
	}
	return 0;
}

float calculate(float a, float b, char op)
{
	if(op == '+')
		return a + b;
	else if(op == '-')
		return a-b;
	else if(op == '*')
		return a*b;
	else
		return a/b;
}
