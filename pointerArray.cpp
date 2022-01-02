
#include <iostream>

using namespace std;

int main()
{
	
	int a[]  = {2,-7,9};
	cout<<a<<endl;
	cout<<&a[0]<<endl;
	cout<<&a[1]<<endl;
	
	int *ptr = a;
	cout<<*ptr<<endl;
	++*ptr;
//	(*ptr)++;
	cout<<*ptr<<endl;

	for(int i=0; i<3; i++)
	{
		cout<<*ptr++<<endl;				// you can skip the ++ptr in the for loop condition area and just write in the cout<<*ptr++<<endl;0
		
	}
	return 0;
}
