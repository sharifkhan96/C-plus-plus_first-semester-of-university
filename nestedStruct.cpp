#include <iostream>
using namespace std;
struct joingDate{
	int date;
	int month;
	int year;
};
struct employee {
	string name;
	int deptNo;
	float salary;
	joingDate jd;
};


int main()
{
	employee e1;
	e1.name = "Irfan";
	e1.deptNo = 1;
	e1.salary = 30;
	e1.jd.date = 4;
	e1.jd.month = 1;
	e1.jd.year = 2020;
	
	cout<<e1.name<<endl;
	cout<<e1.deptNo<<endl;
	cout<<e1.salary<<endl;
	cout<<e1.jd.date<<", "<<e1.jd.month<<", "<<e1.jd.year<<endl;;
	


	return 0;
}
