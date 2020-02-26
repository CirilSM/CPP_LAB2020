#include<iostream>
#include<stdlib.h>
using namespace std;
class figures
{
int r,l,b,ba,h;
public:
figures(int r)
{
cout<<"area of circle:"<<(3.14*r*r)<<"\n";
}
figures(int l,int b)
{
cout<<"area of rectangle:"<<l*b<<"\n";
}
figures(int h,float ba)
{
float y=0.5;
cout<<"area of triangle:"<<y*h*ba<<"\n";
}
};
int l=0;
main()
{
do
{
int h,r,l,b,he;float ba;
cout<<"1.Circle\n2.Rectangle\n3.Triangle\n";
cin>>h;
if(h==1)
	{
	cout<<"Enter Radius::";
	cin>>r;
	figures f(r);
	}
else if(h==2)
{
	cout<<"Enter LENGTH AND BREADTH::";
	cin>>l>>b;
	figures f1(l,b);
}
else if(h==3)
{
	cout<<"Enter HEIGHT,BASE::";
	cin>>he>>ba;
	figures f2(he,ba);
}
cout<<"\nAGAIN?";
cin>>l;
if(l==0)
	exit(0);
}while(l!=1);
}
