//Write a program that prompts a user to enter three numbers. 
//Check whether the first number is greater than the other two or not.

//Write a program that prompts the user to input a number. 
//The program should then output the 
//number and a message saying whether the number is positive, negative, or zero.

//Write a program that prompts the user to input an integer between 0 and 35. 
//If the number is less than or equal to 9, the program should output the number; 
//otherwise, it should output A for 10, B for 11, C for 12 . . . and Z for 35. 

#include<iostream>

using namespace std;

int main()
{
//	int first, second, third;
//	cout<<"Enter values for these variables:";
//	cin>>first>>second>>third;
//	
//	//Nested if
//	if(first > second)
//	{
//		if(first > third)
//			cout<<"first is greater than the other two.\n";
//	}
//	cout<<"End\n";
//	
//	//using logical &&
//	if(first > second && first > third)
//		cout<<"first is greater than the other two.\n";	



//	int value;
//	cout<<"Enter a number: ";
//	cin>>value;
//	if(value > 0)
//		cout<<"Positive\n";
//	else if(value < 0)
//		cout<<"Negative\n";
//	else
//		cout<<"Zero\n";

//	int value;
//	cout<<"Enter a number: ";
//	cin>>value;
//	if(value > 0)
//		cout<<"Positive\n";
//	else
//	{
//		if(value < 0)
//		cout<<"Negative\n";
//		else
//		cout<<"Zero\n";
//	}

	int choice;
	char c;
	cout<<"Enter a value between 0 and 35: ";
	cin>>choice;
	if(choice >=0 && choice < 10)
		cout<<choice<<endl;
	else
	{
		c = choice + 55;  // uppercase letters
		cout<<c<<endl;
		// c = choice + 87; // lowercase letters
		cout<<c<<endl;
	}
	
//	int x;
//	cout<<"Enter a number: ";
//	cin>>x;
//	if(x%2 == 0)
//		cout<<x<<" is even.\n";
//	else
//		cout<<x<<" is odd\n";
	return 0;
}
