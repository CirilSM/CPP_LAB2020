//rowise sorting of a  square matrix

#include<iostream>
using namespace std;
main()
	{
	int n,a[100][100],temp;
 	cout<<"Enter number of rows: ";
 	cin>>n;
 	for(int i=0;i<n;i++)
 		{
  		for(int j=0;j<n;j++)
  			{
   			cout<<"Enter element: ";
   			cin>>a[i][j];
  			} 
 		}
 	cout<<"Matrix :- \n";
 	for(int i=0;i<n;i++)
 		{
 	 	for(int j=0;j<n;j++)
  			{
   			cout<<a[i][j];
   			cout<<"\t";
  			} 
  		cout<<"\n";
 		}
 	for(int i=0;i<n;i++)
 		{
 		for(int j=0;j<n;j++)
  			{
   			for(int k=0;k<n-j-1;k++)
   				{
   				if(a[i][k]>a[i][k+1])
    					{
					temp=a[i][k+1];
			                a[i][k+1]=a[i][k];
			        	a[i][k]=temp;
					}
   				}
  			}
 		}
	cout<<"Sorted matrix is: \n";
	for(int i=0;i<n;i++)
		 {
		 for(int j=0;j<n;j++)
		 	{
			cout<<a[i][j];
			cout<<"\t";
			} 
		 cout<<"\n";
		 }
 
	}


