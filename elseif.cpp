#include <iostream>

using namespace std;

int main()
{
	int marks;
	cout<<"Enter your subject marks bet: ";
	cin>>marks;
	if(marks<0 || marks>100)
		cout<<"Invalid marks.\n";
	else if(marks>=87 && marks<=100)
		cout<<"You have got 4.0 GPA\n";
	else if(marks>= 80 && marks<=86)
		cout<<"You got 3.5 GPA\n";
	else if(marks>= 72 && marks<=79)
		cout<<"You got 3.0 GPA\n";
	else if(marks>= 67 && marks<=71)
		cout<<"You got 2.5 GPA\n";
	else if(marks>= 60 && marks<=66)
		cout<<"You got 2.0 GPA\n";
	else
		cout<<"You are failed.\n";
	return 0;
}
