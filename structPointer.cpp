#include <iostream>
using namespace std;
struct employee {
	int deptNo;
	string name;
	float salary;
};

int main()
{
	employee e = {2, "Amjid", 34};
	employee *eptr = &e;
//	eptr = &e;
	
	cout<<eptr->deptNo<<endl;
	cout<<eptr->name<<endl;
	cout<<eptr->salary<<endl;
	cout<<eptr<<endl;
	cout<<&(eptr->deptNo)<<endl;
	cout<<&(eptr->name)<<endl;
	cout<<&(eptr->salary)<<endl;

cout<<sizeof(int);

	return 0;
}
