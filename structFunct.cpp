#include <iostream>
using namespace std;

struct employee {
	string name;
	int deptNo;
	float salary;
};

employee getEmployee()
{
	employee e;
	cout<<"Enter name: ";
	cin>>e.name;
	cout<<"Enter dept no: ";
	cin>>e.deptNo;
	cout<<"Enter salary: ";
	cin>>e.salary;
	return e;
}

void display(employee emp)
{
	cout<<"Name: "<<emp.name<<endl;
	cout<<"Dept No: "<<emp.deptNo<<endl;
	cout<<"Salary: "<<emp.salary<<endl;
}

int main()
{
	employee e;
	e = getEmployee();
	
	display(e);
	
	return 0;
}
