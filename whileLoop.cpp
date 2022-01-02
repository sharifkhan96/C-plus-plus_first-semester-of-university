#include <iostream>

using namespace std;

int main()
{
	int i=0;
	for(;; )
	{
		cout<<"Hello\n";
		i++;
		if(i%2 != 0)
		continue;
		cout<<"a\n";
		cout<<"b\n";
		if(i>=10)
			break;
	}

//	int numb = 99, sum = 0;
//	while(numb != 0)
//	{
//		cout<<"Enter a number(0 to terminate): ";
//		cin>>numb;
//		sum += numb;
//	}
//	
//	cout<<"sum = "<<sum<<endl;

	//Swapping values
//	int a = 2, b = 5;
//	cout<<"a = "<<a<<"\tb = "<<b<<endl;
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//	cout<<"a = "<<a<<"\tb = "<<b<<endl;

	//Fibonnaci Series
//	unsigned int first = 0, second = 1;
//	unsigned int sum;
//	int total;
//	cout<<"Enter number of terms of the series: ";
//	cin>>total;
//	cout<<"Enter the first term of series: ";
//	cin>>first;
//	cout<<"Enter second term of series: ";
//	cin>>second;
//	int i = 3;
//	cout<<first<<"\t"<<second<<"\t";
//	while(i <= total)
//	{
//		sum = first + second;
//		first = second;
//		second = sum;
//		cout<<sum<<"\t";
//		i++;
//	}

//	int hours, students, total;
//	float avg;
//	cout<<"How many students are there?: ";
//	cin>>students;
//	int i=0;
//	while(i<students)
//	{
//		total = 0;
//		int j=0;
//		while(j<3)
//		{
//			cout<<"Hours worked by student "<<i+1<<" on Day "<<j+1<<" : ";
//			cin>>hours;
//			total += hours;
//			j++;
//		}
//		avg = (float)total/3;
//		cout<<"Average hours worked by Student "<<i+1<<" = "<<avg<<endl;
//		i++;
//	}
//	
	
	
	
	
	
	
	
	int student, hours, total;
	float avg;
	
	cout<<"Enter how many students are there: ";
	cin>>student;
	
	int a=0;
	while(a<student)
	{
		total = 0;	
		int b=0;
		while(b<3)
		{
			
			cout<<"Hours worked by student "<<a+1<<" on day "<<b+1<<": ";
			cin>>hours;
			
			total+=hours;
			
			b++;
		}
		
		avg = float(total)/3;
		
		cout<<"Average of hours spent by student "<<a+1<<" is "<<avg<<endl;
		
		a++;
	}
	
	return 0;
}
