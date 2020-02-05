#include<iostream>
using namespace std;
void swap_ref(int&, int&);
void swap_add(int*, int*);
void swap_value(int, int);
int main()
{ int a,b,ch,f;
  cout<<"Enter first number: ";
  cin>>a;
  cout<<"\nEnter second number: ";;
  cin>>b;
  cout<<"\nValues before swapping: ";
  cout<<a<<b;
cout<<"\nMENU\n1.Call By Reference\n2.Call By Address\n3.Call By Value";
cout<<"\nEnter Your Choice: ";
cin>>ch;
switch(ch)
{
case 1: swap_ref(a,b);
	break;
case 2: swap_add(&a,&b);
	break;
case 3: swap_value(a,b);
	break;
default:cout<<"WRONG INPUT DO YOU WANNA TRY AGAIN??(Y==1);
	cin>>f;
	if(f==1)
		main();
	else
		exit(0);
 } 
  return 0;
}
void swap_value(int a,int b)
{ int temp;
  temp = a;
  a = b;
  b = temp; 
  cout<<"\nSwapping using call by value: ";
  cout<<a<<" "<<b;
}
void swap_add(int *a, int *b)
{ int temp;
  temp = *a;
  *a = *b;
  *b = temp;
 cout<<"\nSwapping using call by address: ";
 cout<<*a<<" "<<*b;
}
void swap_ref( int &a, int &b)
{ int temp;
  temp = a;
  a = b;
  b = temp;
  cout<<"\nSwapping using call by reference: ";
  cout<<a<<" "<<b;
}



