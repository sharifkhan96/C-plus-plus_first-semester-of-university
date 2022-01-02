#include<iostream>
using namespace std;
// Sharif Ullah Danish
int main()
{
	const int WEEK=3;
	const int DAY=7;
	int temp[WEEK][DAY];
	int high;
	
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
		
	return 0;	
}
