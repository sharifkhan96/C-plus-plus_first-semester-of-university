#include <iostream>

using namespace std;

int main()
{
	
	
	
	
	int sub1, sub2, sub3, sub4, total, per;
	
	cout<<"Enter Subject one marks: ";
	cin>>sub1;
		cout<<"Enter Subject two marks: ";
	cin>>sub2;
		cout<<"Enter Subject three marks: ";
	cin>>sub3;
		cout<<"Enter Subject four marks: ";
	cin>>sub4;
	
	
	total = sub1+sub2+sub3+sub4;
	
	per = total*100/400;
	
	cout<<"Total is: "<<total<<endl<<"Percentage is: "<<per<<endl;
	
	if(per>=92)
		cout<<"A+ Grade";
		
		else if(per>=87)
			cout<<"A Grade";
			
		else if(per>=80)
			cout<<"B+ Grade";
			
		else if(per>=72)
			cout<<"B Grade";
			
		else if(per>=67)
			cout<<"C+";
			
		else if(per>=60)
			cout<<"C Grade";
			
		else 
			cout<<"Failed";
			
			
			
			
		//	cout<<"\n\n\t Grade"<<per
	
	
	
	
	
	
	
	
	
	return 0;
}
