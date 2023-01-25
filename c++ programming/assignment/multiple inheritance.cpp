/*Que 6 Create a class person having members name and age.
Derive a class student having member percentage. Derive another class teacher having member salary.
Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance).
*/


#include <iostream>
using namespace std;
class Person																			
{
	public:
		string name;
		int  age;
};

class Student																			
{
	public:
		float per;	
};

class Teacher:public Person,public Student												
{
	public:																
		float sal;	
	
		void putDetails()
		{
			cout<<"\nEnter Name : ";
			getline(cin,name);
			cout<<"\nEnter Age : ";
			cin>>age;														
			cout<<"\nEnter Percentage :";
			cin>>per;
			cout<<"\nEnter Salary : ";
			cin>>sal;
		}
	
		
		void showDetails()
		{
			cout<<"\nName : "<<name;
			cout<<"\nAge : "<<age;
			cout<<"\nPercentage : "<<per<<" %";								
			cout<<"\nSalary : "<<sal;
		}
};


int main()
{
	Teacher t;																
	cout<<"\n ";
	t.putDetails();															
	t.showDetails();
	
	
	return 0;
}