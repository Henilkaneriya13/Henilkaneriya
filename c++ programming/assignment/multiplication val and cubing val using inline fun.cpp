#include <iostream>
using namespace std;

class Maths
{
	public:
	int a;
	
	void getA()									
	{
		cout<<"\nEnter A :";
		cin>>a;
	}	
	
	void Cube()													
	{
		cout<<"\nThe Cube of A is : "<<(a*a*a);
	}
};
int main()
{
	Maths m;									
	m.getA();									
	m.Cube();
	return 0;
}  
