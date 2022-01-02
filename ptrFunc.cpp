#include <iostream>
using namespace std;
void display(int a, int b)
{
	a = a+ 10;
	b = b+10;
	cout<<a<<endl<<b<<endl;
}
void change(int *a, int *b)
{
	*a = *a + 10;
	*b = *b + 10;
	cout<<*a<<endl<<*b<<endl;
}
int main(){
	int x = 4, y = 7;
	cout<<x<<endl<<y<<endl;
	display(x, y);
	cout<<x<<endl<<y<<endl;
	change(&x, &y);
	cout<<x<<endl<<y<<endl;
	
	
	return 0;
}
