#include<iostream>
using namespace std;
// Sharif Ullah Danish

  void Temperature(int WEEK,int DAY,int temp[][7],int high);
int main()
{
	const int week=3;
	const int day=7;
	int Temp[week][day];
	int High;
      Temperature(week,day,Temp,High);
	return 0;	
}

void Temperature(int WEEK,int DAY,int temp[][7],int high){
	//
		
	for(int i=0;i<WEEK;i++){
		cout<<"Temperature for week number "<<i+1<<endl<<endl;
		for(int j=0;j<DAY;j++){
			cout<<"Enter Temperature for day "<<j+1<<" : ";
			cin>>temp[i][j];	
		}
			for(int j=0;j<DAY;j++)
			{
				if(temp[i][j]>high){
					high=temp[i][j];
				}
		}
			cout<<"Highest temperature of week "<<i+1<<" is  : "<<high<<endl<<endl;
		high=0;
		
	}for(int i=0;i<WEEK;i++)
	{	for(int j=0;j<DAY;j++)
			{   if(temp[i][j]>high){
					high=temp[i][j];
				}		
			
		}
		
		}	cout<<"Highest temperature among above two weeks is : "<<high<<endl;
		
///	
}
