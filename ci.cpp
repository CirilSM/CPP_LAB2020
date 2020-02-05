#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float p,n,t,a,r,A;
	cout<<"\n\nPrinicpal Amount::";
	cin>>p;
	cout<<"Interest::";
	cin>>r;
	cout<<"number of times interest applied per time period::";
	cin>>n;
	cout<<"number of time periods elapsed::";
	cin>>t;
	r=r/100;
	a=(1+(r/n));
	a=pow(a,(n*t));
	A=p*a;
	cout<<"THE AMOUNT IS::"<<A;
	return 0;
}
