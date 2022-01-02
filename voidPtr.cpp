#include <iostream>
using namespace std;

int main()
{
	int x = 4;
	float y = 2.2;

	int *ptrx = &x;
	float *ptry = &y;

//	int *p = &y;
	void *ptr = &x;
	cout<<*(int*)ptr<<endl;
	ptr = &y;
	cout<<*(float*)ptr<<endl;

	return 0;
}
