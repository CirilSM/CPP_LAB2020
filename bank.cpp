#include<iostream>
using namespace std;
class bank
{
char name[20];
int acno;
char type[20];
int balance;
public:
void assign()
{
cout<<"Enter name :";
cin>>name;
cout<<"Enter account number:";
cin>>acno;
cout<<"Enter type of account :";
cin>>type;
balance=500;
}
void deposit()
{ int dep;
cout<<"Enter amount to be deposited :";
cin>>dep;
balance=balance+dep;
cout<<"\nSUCCESSFULLY DEPOSITED\n";
cout<<"current balance :"<<balance;
}
void withdraw()
{
int amt,min;
cout<<"\nEnter amount to withdraw :";
cin>>amt;
min=balance-amt;
if(min>=500)
{
balance=balance-amt;
cout<<"\nSUCCESSFULLY WITHDRAWED";
cout<<"\nremaining balance :"<<balance;
}
else
cout<<"\nCannot withdraw!!";
}
void display()
{
cout<<"\n\nNAME :"<<name;
cout<<"\nBALANCE :"<<balance;
}
};

int main()
{
bank b;
b.assign();
b.deposit();
b.withdraw();
b.display();
cout<<"\n";
return 0;
}

