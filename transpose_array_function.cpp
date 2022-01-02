#include <iostream>
using namespace std;
//Sharif Ullah Danish

void transpose1(int a[5][5], int transpose[5][5], int r, int c, int i, int j);

int main()
{
	
	int a[5][5], transpose[5][5], r, c, i, j;
	
	cout<<"Enter Rows & Columns: ";
	cin>>r>>c;
	
	cout<<"\n Enter elements of matrix: ";
	for(i=0; i<r; ++i)
		for(j=0; j<c; ++j)
		{
			cout<<"Enter matrix "<<"["<<i+1<<"]"<<"["<<j+1<<"]: ";
			cin>>a[i][j];	
		}	
		
	transpose1(transpose, a);
	
	return 0;
}

void transpose1( int a[5][5], int transpose[5][5], int r, int c, int i, int j)
{
	
	cout<<"\n\n Your matrix is below: \n ";
	for(i=0; i<r; ++i)
	
		for(j=0; j<c; ++j)
		{
			cout<<" "<< a[i][j];
			if( j == c - 1 )
			cout << endl << endl;
		}
	
	
	for(i=0; i<r; ++i)
	{
		for(j=0; j<c; ++j)
		{
			transpose[j][i] = a[i][j];
		}
	}
	
	
	cout<<"Transpose is: \n";
	for(i=0; i<c; ++i)
	{
		for(j=0; j<r; ++j)
		{
			cout<<" "<<transpose[i][j];
			
			if(j == r - 1)
			
			cout<<endl<<endl;
			
		}
	}
	
}
