#include <iostream>
using namespace std;
void display(struct employee e[], int n);
struct employee {
	int deptNo;
	string name;
	float salary;
};

int main()
{
	employee emps[3];
//		emps[0].deptNo = 1;
//	emps[0].name = "Khan";
//	emps[0].salary = 34;
	for(int i=0; i<3; i++)
	{
		cout<<"Enter data for employee "<<i+1<<endl;
		cout<<"Enter dept number: ";
		cin>>emps[i].deptNo;
		cout<<"Enter name: ";
		cin.ignore();
		getline(cin, emps[i].name);
		cout<<"Enter salary: ";
		cin>>emps[i].salary;

	}

//	cout<<emps[0].deptNo<<endl;
//	cout<<emps[0].name<<endl;
//	cout<<emps[0].salary<<endl;

//	for(int i=0; i<3; i++)
//	{
//		cout<<"Employee "<<i+1<<" Data\n";
//		cout<<"Dept no: "<<emps[i].deptNo<<endl;
//		cout<<"Name: "<<emps[i].name<<endl;
//		cout<<"Salary: "<<emps[i].salary<<endl;
//	}
	display(emps, 3);
	return 0;
}

void display(employee e[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"Employee "<<i+1<<" Data\n";
		cout<<"Dept no: "<<e[i].deptNo<<endl;
		cout<<"Name: "<<e[i].name<<endl;
		cout<<"Salary: "<<e[i].salary<<endl;
	}
}
