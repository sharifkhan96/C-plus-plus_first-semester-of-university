#include <iostream>
using namespace std;
// Sharif Ullah Danish

int main()
{
	const int PER=3;
	const int MONTH=6;
	int data[PER][MONTH];
	
	
	for(int i=0; i<PER; i++)
	{
		int total=0, max=0, min=99999;
		cout<<"\n User "<<i+1<<" Data: "<<endl;
		
		for(int j=0; j<MONTH; j++)
		
		{
			cout<<"Enter expenses for month "<<j+1<<": ";
			cin>>data[i][j];
			
			total+=data[i][j];
			if(data[i][j]>max) max = data[i][j];
			if(data[i][j]<min) min = data[i][j];
		}
	
				// we use loop for just stars
			
			for(int a=0; a<40; a++)
			cout<<"-";
			
			cout<<"\n	User "<<i+1<<" \t 6 month expenses \n";
			
			for(int a=0; a<40; a++)
			cout<<"-";
			
			cout<<"\n Total is: "<<total;
			cout<<"\n Highest is: "<<max;
			cout<<"\n Lowest is: "<<min<<endl;
			
				// we use loop for just stars
			
			for(int a=0; a<40; a++)
			{
			cout<<"*";
			}
			
			
	}
		
	return 0;
}
