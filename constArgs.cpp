#include <iostream>

using namespace std;

void display(const int a[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<a[i]<<endl;
//		a[i] += 10; // This statement will give you error now
	}
};
int main()
{
	int marks[] = {77, 87, 99};
	display(marks, 3);
//	for(int i=0; i<3; i++)
//	{
//		cout<<marks[i]<<endl;
//	}
	return 0;
}
