#include<iostream>
using namespace std;

class side
{
	protected:
		int l;
	
	public:
	void setval(int x)
	
		{
			l = x;
		}
};
 
class square : public side
{
	public:
		
		int sqr()
		{
		
			return l*l;
		}
};

class cube : public side
{
	public:
		
		int cub()
		{
			return l*l*l;
		}
};


int main()
{
	square sq;
	int val;
	cout<<"\nenter value : ";
	cin>>val;
	sq.setval(val);
	int s = sq.sqr();
	cout<<"\nsquare is : "<<s;
	
	if(s%2==0)
	{
		cout<<"\nsquare is even";
	}
	else
	{
		cout<<"\nsquare is odd : ";
	}
	cube cb;
	int val1;
	cout<<"\nenter value for cube : ";
	cin>>val1;
	cb.setval(val1);
	int c = cb.cub();
	cout<<"\ncube is :"<<c;
	return 0;
}