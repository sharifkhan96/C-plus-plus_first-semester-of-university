#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	cout<<"x = "<<x<<endl;
	cout<<"&x = "<<&x<<endl;
	
	int *ptr = &x;
	cout<<"ptr = "<<ptr<<endl;
	cout<<"*ptr = "<<*ptr<<endl;
	cout<<"&ptr = "<<&ptr<<endl;
	int *ptr2;
	ptr2 = ptr;
	ptr2++;
	cout<<"ptr2 = "<<ptr2<<endl;
	cout<<"*ptr2 = "<<*ptr2<<endl;

	return 0;
}
