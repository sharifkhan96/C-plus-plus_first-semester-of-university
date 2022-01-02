#include <iostream>

using namespace std;

int main()
{
//	int a, b, c, largest;
//	cout<<"Enter three numbers:\n";
//	cin>>a>>b>>c;
//	if(a>b)
//	{
//		if(a>c)
//			largest = a;
//		else
//			largest = c;
//	}
//	else{
//		if(b>c)
//			largest = b;
//		else
//			largest = c;
//	}
//	cout<<"Largest value is "<<largest<<endl;

//int x,y,z,large;
//cout<<"Enter value for x number: ";
//cin>>x;
//cout<<"Enter value for y number: ";
//cin>>y;
//cout<<"Enter value for z number: ";
//cin>>z;
//
//if(x>y)
//{
//	if(x>z)
//	large=x;
//	
//	else
//	large=z;
//}else{
//	
//	if(y>z)
//	large= y;
//	
//	else large= z;
//}
//cout<<"largest no: "<<large;



int jb,bg,em;
cout<<"Enter jeff bezos wealth: ";
cin>>jb;
cout<<"Enter bill gates wealth: ";
cin>>bg;
cout<<"Enter elon musk wealth: ";
cin>>em;

if(jb>bg)
{
	if(jb>em)
	cout<<"jef is the richest man";
	
	else cout<<"elon musk is the richest";
}else 
{
	if(bg>em)
	cout<<"bill is th richeat";
	
	else cout<<"elon is the richest";
}


return 0;
}
