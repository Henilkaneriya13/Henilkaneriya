#include<iostream>
using namespace std;


class a{
	public:
		a()
		{
			cout<<"\na's constructor called.";
		}
		void show ()
		{
			cout<<"\na's method called .";
		}
	
};
class b : public a{

	public:
	b()
		{
			cout<<"\nb's constructor called.";
		}
		void show()
		{
			a::show();
			cout<<"\nb's method called .";
		}
};
class c : public b{

	public:
	c()
		{
			cout<<"\nc's constructor called.";
		}
		void show() 
		{
			b::show();
			cout<<"\nc's method called .";
		}			
};
int main()
{
	c obj;
	obj.show();
	return 0;
}