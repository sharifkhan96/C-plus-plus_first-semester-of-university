#include <iostream>
using namespace std;
struct employee {
	string name;
	int deptNo;
	float salary;
} e2;


int main()
{
	employee e1;
	e1.name = "Irfan";
	e1.deptNo = 1;
	e1.salary = 30;
	cout<<"Initialazation separately"<<endl;
	cout<<e1.name<<endl;
	cout<<e1.deptNo<<endl;
	cout<<e1.salary<<endl;
	
	cout<<"Enter name: ";
	cin>>e2.name;
	cout<<"Enter dept number: ";
	cin>>e2.deptNo;
	cout<<"Enter salary: ";
	cin>>e2.salary;
	
	cout<<e2.name<<endl;
	cout<<e2.deptNo<<endl;
	cout<<e2.salary<<endl;
	cout<<sizeof(employee);


	employee e3 = {"Khan", 5, 25.0};
	cout<<"\n\n Intitialized at once"<<endl;
	cout<<e3.name<<endl;
	cout<<e3.deptNo<<endl;
	cout<<e3.salary<<endl;

	return 0;
}
