#include<iostream>
using namespace std;
void check(int a)
{	int x[3],i=0,d,n;
	n=a;
	while(n!=0)
	{
		d=n%10;
		x[i]=d;
		i++;
		n=n/10;
	}	
	if(x[1]==x[0]+x[2])
	{
		cout<<"\n\tCondition is satisfied :)\n";
	}
	else
	{
		cout<<"\n\tCondition is not Stisfied :(\n";
	}
}
int main()
{
	int a;
	cout<<"\n\t\tENTER THE NUMBER::";
	cin>>a;
	if(a>99 && a<1000)
		check(a);
	else
		cout<<"\n\tNUMBER SHOULD HAVE 3 DIGITS\n";
	return 0;
}

