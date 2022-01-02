#include <iostream>
using namespace std;
// Sharif Ullah Danish

void disarr(int Per, int m,int expenses[][6]);

int main()
{
	const int PER=3;
	const int MONTH=6;
	int Expenses[PER][MONTH];
	
	disarr(PER,MONTH,Expenses);


	return 0;
}



void disarr(int per,int m,int expenses[][6])
{
	for(int i=0; i<per; i++)
	{
		int total=0, max, min=999999;
		cout<<" User "<<i+1<<" Data: "<<endl;
		cout<<"__________________________________________"<<endl;
		for(int j=0; j<m; j++)
		{
			cout<<"Enter expenses for month month "<<j+1<<": ";
			cin>>expenses[i][j];	
			
			total+=expenses[i][j];
			if(expenses[i][j]>max) max = expenses[i][j];
			if(expenses[i][j]<min) min = expenses[i][j];
		}
		cout<<"*******************************************"<<endl;	
		cout<<"\t Total: "<<total<<endl;
		cout<<"\t Max: "<<max<<endl;
		cout<<"\t Min: "<<min<<endl;
		cout<<"*******************************************"<<endl;
	}	
}
