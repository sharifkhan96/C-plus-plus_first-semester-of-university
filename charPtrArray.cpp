#include <iostream>
using namespace std;

int main()
{
	
	//char *names[3] = {"Hamid", "Amjid"};
	//cout<<names[0]<<endl;
	
	
	
	
	
	char *uni[3] = {"IM-Sciences University", "Qurtuba University", "Iqra University"};

	for(int i=0; i<3; i++)
	cout<<"No "<<i+1<<" is: "<<uni[i]<<endl;
	
	
	
	char *deps[3] = {"Computer Science", "Business Administration", "Cyber Security"};
	
	cout<<"\n By simply cout: "<<*deps<<endl<<endl;
	
	for(int j=0; j<3; j++)
	cout<<"Department No "<<j+1<<" is: "<<deps[j]<<endl;
	
	return 0;
}
