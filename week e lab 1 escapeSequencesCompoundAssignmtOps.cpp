#include <iostream>

using namespace std;

int main()
{
	int count;
	int total;
	total = 10; 
	total = total + 1;  //Replace this by increment operator	
	count = 3 + 4; 	
	total = total * count; //Replace this by compound assignment operator
	count = total % count; //Replace this by compound assignment operator
	
	//Use new line escape sequence instead of endl
	cout<<"We are working with escape sequences."<<endl; 

	//Insert a tab escape sequence in space between count and total
	cout<<"Count Total\n";
	
	//Insert a tab escape sequence between count and total
	cout<<total<<endl<<count<<endl;
	
	//Produce an alert sound
	
	return 0;
}
