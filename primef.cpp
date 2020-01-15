#include<iostream>
using namespace std;
int main()
{
	int f,i,n,count=0;
	cout<<"Enter the Number";
	cin>>n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			for(f=1;f<i;f++)
				{
					if(i%f==0)
						count=count+1;
				}
			if(count==1)
				cout<<i;
		}
		count=0;
	}
return 0;
}
