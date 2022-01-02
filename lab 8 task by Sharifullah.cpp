#include <iostream>

// Sharifullah Danish

using namespace std;

int main()


{
	int x,y,z;
	cout<<"enter x: ";
	cin>>x;
	
	cout<<"enter y: ";
	cin>>y;
	
	cout<<"enter z: ";
	cin>>z;
	
	if(x>y && x>z)
	cout<<x<<" is greater";
	
	else if(y>x && y>z)
	cout<<y<<" is greater";
	
	else if(z>x && z>y)
	cout<<z<<" is greater \n";
	
	else 
	cout<<"\n oops! \t values are same \t try again";
	
	
	return 0;
}
