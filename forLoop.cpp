#include <iostream>

using namespace std;

int main()
{
	
//	for(int i=0; i<10; ++i)
//		cout<<"Hello World!\n";
		
//	for(int i=1; i<=100; i++)
//		cout<<i<<endl;
//	
//	cout<<"		Welcome"<<endl;	
//	int j;
//	for(j=0; j<10; j++)
//		cout<<j<<endl;
//	
//	
//	//display even numbers
//	
//	for(int i=0; i<=20; i += 2)
//		cout<<i<<endl;
//		
//	//odd
//	for(int i=1; i<=20; i += 2)
//		cout<<i<<endl;
//	
//	for(int i=0; i<=20; i++)
//	{
//		if(i%2 == 0)
//			cout<<i<<endl;
//	}
//	
//	//Display square of each number from 0-9
//	for(int i=0; i<10; i++)
//		cout<<"The square of "<<i<<" is "<<i*i<<endl;
//		
	int sum = 0;
	for(int k=1; k<=10; k++)
	{
		sum += k;
		cout<<k<<" + ";
	}
		cout<<"\n";
		cout<<"Sum of first 10 non-zero positive integers is "<<sum;
	
	return 0;
}
