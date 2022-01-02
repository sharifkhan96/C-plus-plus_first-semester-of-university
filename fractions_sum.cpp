#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	char extrachar;
	cout<<"Enter first fraction in the form a/b: ";
	cin>>a>>extrachar>>b;
	cout<<"Enter second fraction in the form c/d: ";
	cin>>c>>extrachar>>d;
	int sum_numerator = a*d + b*c;
	int sum_denominator = b*d;
	cout<<"Sum of the fractions a/b and c/d is: "
		// <<a<<"/"<<b<<" + "<<c<<"/"<<d<<" = "
		<<sum_numerator<<"/"<<sum_denominator;
	return 0;
}
