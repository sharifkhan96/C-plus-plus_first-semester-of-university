#include <iostream>

using namespace std;

int main()
{

	char grade;
	
	cout<<"enter you grade(a,b,c";
	cin>>grade;
	
	switch(grade)
	{
		
			case 'a': cout<<"grade a!! excellent";
					break;
					
			case 'b': cout<<"b grade is good";
					break;
					
			case 'c': cout<<"c grad is also not bad";
					break;
					
			default:
				cout<<"you are not passed";
			
	}
	
	
	return 0;
}
