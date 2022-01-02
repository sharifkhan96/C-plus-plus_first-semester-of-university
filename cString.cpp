#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	const int MAX = 80;
	char name[MAX];
//	cout<<&name;
//	cout<<"Enter your name: ";
//	cin>>name;
//	cout<<name;
	name[0] = 'A';
	name[1] = 'l';
	name[2] = 'i';
	name[3] = '\0';
//	cout<<name;
	for(int i=0; name[i] != '\0'; i++)
		cout<<name[i];
		
	char str[] = {'K', 'h', 'a', 'n', '\0'};
	char str2[] = "Jameel";
	
//	cout<<strlen(name)<<endl;
//	cout<<strlen(str2)<<endl;
	cout<<endl;
	for(int i=0; i<strlen(str2); i++)
	{
		cout<<str2[i];
	}
	return 0;
}
