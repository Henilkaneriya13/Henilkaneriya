#include<iostream>
using namespace std;


class a{
	public:
		a()
		{
			cout<<"\na's constructor called.";
		}
};
class b : public a{

	public:
	b()
		{
			cout<<"\nb's constructor called.";
		}
};
class c : public b{

	public:
	c()
		{
			cout<<"\nc's constructor called.";
		}			
};
int main()
{
	c obj;
	return 0;
}