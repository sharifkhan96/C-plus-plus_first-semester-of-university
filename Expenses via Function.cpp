#include <iostream>
using namespace std;
// Sharif Ullah Danish
   void Expenses(int p,int m,int Data[][6]);

int main()
{
	const int PER=3;
	const int MONTH=6;
	int data[PER][MONTH];
	
	Expenses(PER,MONTH,data);

		
	return 0;
}

	void Expenses( int p, int M,int Data[][6]){
		
		//
			for(int i=0; i<p; i++)
	{
		int total=0, max=0, min=999999;
		cout<<"\n User "<<i+1<<" Data: "<<endl;
		
		for(int j=0; j<M; j++)
		
		{
			cout<<"Enter expenses for month "<<j+1<<": ";
			cin>>Data[i][j];
			
			total+=Data[i][j];
			if(Data[i][j]>max) max = Data[i][j];
			if(Data[i][j]<min) min = Data[i][j];
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
		//
	}
	
