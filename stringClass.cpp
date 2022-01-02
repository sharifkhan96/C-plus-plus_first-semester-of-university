#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1("BCS");
	cout<<s1<<endl;
	string s2 = "BSSE";
	string s3 = s1 + " and " + s2;
	cout<<s3<<endl;
	s1.swap(s2);
	cout<<s1<<" "<<s2<<endl;
	int i = s2.find("C");
	cout<<i<<endl;
	i = s2.find("CS");
	cout<<i<<endl;
	i = s1.find_first_of("AEIOU");
	cout<<i<<endl;
	cout<<s1.size()<<endl;
	cout<<s1.length()<<endl;
	i = s1.find_last_of("S");
	cout<<i<<endl;
	i = s1.find_first_not_of("AEIOU");
	cout<<i<<endl;
	
	s3.erase(4, 4);
	cout<<s3<<endl;
	s3.insert(4, "& ");
	cout<<s3<<endl;
	string uni = "Institute of Engineering Sciences, Peshawar";
	cout<<uni<<endl;
	uni.replace(13, 11, "Management");
	cout<<uni<<endl;
	uni.append(" Phase 7");
	cout<<uni<<endl;
	
	int x = 3, y = 3;
	if(x == y)
		cout<<"Equal"<<endl;
	
	if(s1 == s2)
		cout<<"Match"<<endl;
	else
		cout<<"Does not match"<<endl;
		
	int c = s1.compare(0, 1, s2, 1, 1);
	if(c == 0)
		cout<<"Matched"<<endl;
	else if(c<0)
		cout<<"s1 comes before s2"<<endl;
	else
		cout<<"s2 comes before s1"<<endl;
}
