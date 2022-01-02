#include <iostream>
using namespace std;
void table(int table, int total);
void rTable(int table, int total);

int main()
{

//	int a;
//	cout<<"Enter any number for finding its table: "; 
//	cin>>a;
//	table(a, 10);
	rTable(2, 1);
	return 0;
}

void table(int table, int total)
{
	for(int i=1; i<=total; i++)
		cout<<i<<"*"<<table<<" = "<<table*i<<endl;
}

void rTable(int table, int total)
{
	//base case
	if(total == 10)
		cout<<table<<"*"<<total<<" = "<<table*total<<endl;
	//general case
	else{
		cout<<table<<"*"<<total<<" = "<<table*total<<endl;
		rTable(table, total+1);
	}
}
