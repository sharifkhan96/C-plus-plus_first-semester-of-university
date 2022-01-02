#include <iostream>

using namespace std;

int main()
{
	int dayNumber;
	cout<<"Enter number for day (from 0-6): ";
	cin>>dayNumber;
	if(dayNumber >=0 && dayNumber <= 6)
	{
		switch(dayNumber)
		{
			case 0:
				cout<<"Monday";
				break;
			case 1:
				cout<<"Tuesday";
				break;
			case 2:
				cout<<"Wednesday";
				break;
			case 3:
				cout<<"Thursday";
				break;
			case 4:
				cout<<"Friday";
				break;
			case 5:
				cout<<"Saturday";
				break;
			case 6:
				cout<<"Sunday";
				break;
		}
	}
	else
		cout<<"You have entered an invalid number.";
	return 0;
}
