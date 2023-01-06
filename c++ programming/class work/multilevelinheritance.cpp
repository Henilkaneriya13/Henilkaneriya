#include<iostream>
using namespace std;


class a{

	public :
		int a;
		
		void geta()
		{
			cout<<"\nenter a : ";
			cin>>a;
		}
		
		void puta()
		{
			cout<<"a = "<<a;
		}
		};
		
class b : public a
{
	public :
		int b;
		
		void getb()
		{
			cout<<"\nenter b : ";
			cin>>b;
		}
		
		void putb()
		{
			cout<<"b = "<<b;
		}
};

class c : public b
{
	public :
		int c;
		
		void getc()
		{
			cout<<"\nenter c : ";
			cin>>c;
		}
		
		void putc()
		{
			cout<<"c = "<<c;
		}
};		
int main()
{
	c obj;
	obj.geta();
	obj.getb();
	obj.getc();
	obj.puta();
	obj.putb();
	obj.putc();
	return 0;
}
