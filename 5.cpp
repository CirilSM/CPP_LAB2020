#include<iostream>
using namespace std;
void sort(int a[],int n)
{	int c,j=0;
	for(int i=0;i<n;i++)
		{
		for(j=i;j<n;j++)
			if(a[i]<a[j])
			{
				c=a[j];
				a[j]=a[i];
				a[i]=c;	
			}			
		}
	cout<<"Sorted Array";
	for(int i=0;i<n;i++)
		cout<<" "<<a[i];
}
int main()
{
	int n,a[20];
	cout<<"ENTER SIZE::";
	cin>>n;
	cout<<"Enter Elements";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,n);
	return(0);
}
