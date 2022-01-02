#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 3;
	float grade[SIZE] ; // = {25, 23, 22.5};
	
	for(int i=0; i<SIZE; i++){
		
		cout<<"enter first subject marks: ";
		cin>>grade[i];
		
	}
	
	float min = grade[0];
	for(int i=0; i<SIZE; i++)
	{
		if(grade[i] < min)
		{
			min = grade[i];
		}
	}
	
	cout<<"Minimum = "<<min<<endl;
	
	float max = grade[0];
	int j=0;
	while(j<SIZE)
	{
		if(grade[j] > max)
		{
			max = grade[j];
		}
		j++;
	}
	cout<<"Maximum = "<<max<<endl;
	return 0;
}
