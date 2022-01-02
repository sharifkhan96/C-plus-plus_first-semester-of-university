#include <iostream>
using namespace std;
struct employee {
	string name;
	int deptNo;
	float salary;
	int awardsYears[3];
};


int main()
{
	employee e1;
	e1.name = "Irfan";
	e1.deptNo = 1;
	e1.salary = 30;
	e1.awardsYears[0] = 2012;
	e1.awardsYears[1] = 2013;
	e1.awardsYears[2] = 2015;
	
	cout<<e1.name<<endl;
	cout<<e1.deptNo<<endl;
	cout<<e1.salary<<endl;
	cout<<e1.awardsYears[1];
	
	employee e2 = {"Khan", 2, 25.0, {2016, 2017, 2019}};
	cout<<endl<<e2.name<<endl;
	cout<<e2.deptNo<<endl;
	cout<<e2.salary<<endl;
	cout<<e2.awardsYears[1];

	return 0;
}
