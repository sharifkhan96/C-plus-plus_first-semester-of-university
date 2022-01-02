#include <iostream>

using namespace std;

int main()
{
    
    float distance,height, t;
    cout<<"Enter the time";
    cin>>t;
    cout<<"enter height";
    cin>>height;
    float g=9.8;
    int b=0;
    
    while(b<=t)
    {
        distance=0.5*g*b*b;
        
        cout<<"distance"<<distance<<endl;
    
        b++;
    

	}
    	if(distance>height)
	cout<<"invalid distance";
    return 0;
}



