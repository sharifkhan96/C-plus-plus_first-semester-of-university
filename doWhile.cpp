#include <iostream>

using namespace std;

int main()
{
	int x = 5, y = 7;
	cout<<"x = "<<x<<"\ty = "<<y<<endl;
	while(y < x)
	{
		++x;
		--y;
	}
	cout<<"x = "<<x<<"\ty = "<<y<<endl;
	
	do
	{
		++x;
		--y;
	}while(y < x);
	
	cout<<"\n\n\n x = "<<x<<"\ty = "<<y<<endl;
	return 0;
}
