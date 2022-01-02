#include <iostream>
using namespace std;
//Sharif Ullah Danish

int sum2d(int a[][2], int r, int c);

int main()
{
	
	
	const int SIZE = 3;
	int matrix[3][2];   //={{4, 3}, {8, 6}, {5, 2}};
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<2; j++)
		{
		cout<<"Enter 3x2 matrix for their : ";
		cin>>matrix[i][j];
		}
	}
	
	cout<<"Sum of 2D: "<<sum2d(matrix, 3, 2);
	
	return 0;
}


int sum2d(int a[][2], int r, int c)
{
	int result=0;
	
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			result+=a[i][j];
		}
	}
	
	return result;
}
