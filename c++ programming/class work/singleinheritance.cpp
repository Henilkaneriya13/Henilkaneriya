#include<iostream>
using namespace std;

class a 
{
	public:
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
int main()
{
	b obj2;
	obj2.geta();
	obj2.getb();
	obj2.puta();
	obj2.putb();
	return 0;
}