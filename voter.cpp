#include<iostream>
using namespace std;
class voter
{	public:
	int c_votes;
	int cid;
	static int t_votes,discarded_votes;
	voter()
		{
		c_votes=0;
		}
	int chkid()
		{
		if(cid==1 || cid==2 || cid==3 || cid==4 || cid==5)
		return 1;
		else
		return 0;
		}
	void read()
	{ 
	int r;
	cout<<"Enter id :";
	cin>>cid;
	r=chkid();
	if(r==1)
	{
	cout<<"VOTED SUCCESSFULLY!";
	c_votes+=1;
	t_votes+=1;
	}
	else 
		{
		cout<<"invalid id!\nVOTE DISCARDED";
		discarded_votes+=1;
		}
	}
	void display()
	{
	cout<<"\nNo. of total votes:"<<t_votes;
	cout<<"\nNo. of discarded votes:"<<discarded_votes; 
	}	
};

int main()
{
	int i;
	voter v[5],v2;
	for(i=0;i<5;i++)
	{
		v[i].read();
		v[i].chkid();
		v[i].display();
	}
	
	return 0;
}

