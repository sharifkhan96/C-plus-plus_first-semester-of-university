#include <iostream>

using namespace std;

int main()
{
//	int x = 5, k = 5;
//	cout<<x<<"\t"<<k<<endl;
//	int y, z;
//	y = ++x;  //y=6 x=6
//	cout<<"y = "<<y<<"\t x="<<x<<endl;
//	z = k++; //z=5 k=6
//	cout<<"z = "<<z<<"\t k="<<k<<endl;
//	
//	x = 6;
//	int t = 7;
//	++t;  //t wil be 8
//	y = t--; // y wil be 8 and t will be 7
//	z = ++x + y--; // z and x will be 7 + y wil be 7 but the z will be 15
//	cout<<z<<endl;
	

	int x = -2147483648;
	cout<<x<<endl;
	--x;
	cout<<x<<endl;
	x = 2147483647;
	cout<<x<<endl;
	++x;
	cout<<x<<endl;
	unsigned int u = x + 1;
	cout<<u<<endl;
	
	
	cout<<"another program \n\n";
	x = 12;
	int y = 14;
	cout<<x/y<<endl<<endl;  // result will be zero
	// Type casting
	cout<<(float)x/y<<endl; //result will be zero point ...
	cout<<static_cast<float>(x)/y<<endl; //result will be zero point ...
	
	
	
	
	return 0;
		
}
