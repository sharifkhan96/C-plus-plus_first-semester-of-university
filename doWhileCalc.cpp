#include <iostream>

using namespace std;

int main()
{
	float first, second, result;
	char op, choice;
	do
	{
		cout<<"Enter a number operator and another number: ";
		cin>>first>>op>>second;
		switch(op)
		{
			case '+':
				result = first + second;
				cout<<result<<endl;
				break;
			case '-':
				result = first - second;
				cout<<result<<endl;
				break;
			case '*':
				result = first * second;
				cout<<result<<endl;
				break;
			case '/':
				result = first / second;
				cout<<result<<endl;
				break;
			default:
				cout<<"Unsupported operation\n";
		}
		cout<<"Do you want another calculation? (y for yes): ";
		cin>>choice;
	}while(choice == 'y' || choice == 'Y');
	return 0;
}
