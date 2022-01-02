#include <iostream>

using namespace std;

int main()
{
//	int alpha, beta, larger;
//	cout<<"Enter values for alpha: ";
//	cin>>alpha;
//	cout<<"Enter values for beta:\n";
//	cin>>beta;
//	larger = (alpha > beta) ? alpha : beta;
//	cout<<larger<<endl;
	
//	int a, b, c, d,  largest;
//	cout<<"Enter four values:\n";
//	cin>>a>>b>>c>>d;
//	//Nested conditional operators
//	largest = (a > b & a > c & a > d) ? a : d & (b > c & b > d) ? b : d & (c > d) ? c : d ;
//	cout<<"Largest value is "<<largest;
//	
//	
	
	
//	int ims,isl,uet,top;
//	cout<<"enter scores for ims";
//	cin>>ims;
//	cout<<"enter scores for isl";
//	cin>>isl;
//	cout<<"enter scores for uet";
//	cin>>uet;
//	
//	top = ims>isl ? (ims>uet ? ims : uet) : (isl> uet ? isl : uet);
//	cout<<"top university score: "<<top;
//	
	int idrees,irfan,danish,noman,topper;
	
	cout<<"Enter Idrees No: ";
	cin>>idrees;
	cout<<"Enter Irfan No: ";
	cin>>irfan;
	cout<<"Enter Danish No: ";
	cin>>danish;
	cout<<"Enter Noman No: ";
	cin>>noman;

	topper = (idrees > irfan & idrees > danish & idrees > noman) ? idrees : noman &  (irfan > danish & irfan > noman) ? irfan : noman & (danish > noman) ? danish : noman;
	
	cout<<"Topper is "<<topper;
	
	
	
	return 0;
}
