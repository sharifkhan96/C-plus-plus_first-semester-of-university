#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	const int MAX = 80;
	char name[MAX];
	char str[MAX];
	cout<<"Enter you name: ";
	//cin>>name[MAX];		// it wil give you error
	cin.get(name, MAX);
	
	
	
//	int i;
//	for(i=0; i<strlen(name); i++)
//		str[i] = name[i];
//	str[i] = '\0';
//	for(i=0; i<strlen(str); i++)
//		cout<<str[i]<<endl;
		
//	cout<<name;			// [4];	
	char str2[MAX];
	strcpy(str2, name); //copy name to str2
	cout<<str2<<endl;
	
	return 0;
}
