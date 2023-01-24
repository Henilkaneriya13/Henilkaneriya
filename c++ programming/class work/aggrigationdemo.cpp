#include<iostream>
using namespace std;

class address {
	public:
		string street,city,state;
		
		address(string street,string city,string state)
		{
			this->street = street;
			this->city = city;
			this->state = state;
		}
};
class employee{
	private:
		address *Address;
	public:
	int id;
	string name;
	
	employee(int id,string name,address *Address)
	{
		this->id = id;
		this->name = name;
		this->Address = Address;
		}	
		
		void display()
		{
			cout<<"\nid :"<<id;
			cout<<"\nname : "<<name;
			cout<<"\naddress line : "<<Address->street;
			cout<<"\ncity : "<<Address->city;
			cout<<"\nstate : "<<Address->state;
		}
};
int main()
{
	address a1("190 cg road,opp gls","ahmedabad","gujrat");
	employee e1(28,"henil",&a1);
	e1.display();
	return 0;
}