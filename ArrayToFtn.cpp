#include <iostream>
using namespace std;
//int sum(int a[], int s);
int sum(int[], int);
int sum2(int a[][2], int r, int c);
int main()
{
//	const int SIZE = 3;
//	int n[SIZE] = {2, 3, 5};
//	cout<<"Access memory violation: "<<n[100]<<endl;
//	cout<<"Address of array: "<<n<<endl;
//	cout<<"First element of the array: "<<*n<<endl;
//	cout<<"SUM = "<<sum(n, SIZE)<<endl;

	int d2[3][2] = {{3, 1}, {5,4}, {5, 2}};
	cout<<"Sum of 2D = "<<sum2(d2, 3, 2)<<endl;
	//cout<<n<<endl;
	cout<<d2<<endl;
	return 0;
}

int sum(int a[], int s)
{
//	cout<<a<<endl;
	int result = 0;
	for(int i=0; i<s; i++)
		result += a[i];
	return result;
}

int sum2(int a[][2], int r, int c)
{
	int result = 0;
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
			result += a[i][j];
	}
	return result;
}
