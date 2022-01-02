#include <iostream>
using namespace std;

int main()
{
	
	int x = 4;
	int *ptr = &x;
	int **pptr = &ptr;
	cout<<"x = "<<x<<endl;
	cout<<"&x = "<<&x<<endl;
	cout<<"ptr = "<<ptr<<endl;
	cout<<"*ptr = "<<*ptr<<endl;
	cout<<"&ptr = "<<&ptr<<endl;
	cout<<"pptr = "<<pptr<<endl;
	cout<<"*pptr = "<<*pptr<<endl;
	cout<<"**pptr = "<<**pptr<<endl;
	return 0;
}
