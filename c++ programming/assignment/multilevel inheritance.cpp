/*	  Assume that the test results of a batch of students are stored in three different classes. 
	  Class Students are storing the roll number. Class Test stores the marks obtained in two subjects 
	  and class result contains the total marks obtained in the test. The class result can inherit the details 
	  of the marks obtained in the test and roll number of students. (Multilevel Inheritance)  
*/


#include<iostream>
using namespace std;

class Student
{
	public:												
		int Rollno;
};

class Test:public Student
{														
	public:
		int Math,Sci;
		
};

class Result:public Test
{														
	public:
		int Total;
		
		
		void set()												
		{
			cout<<"\nEnter Roll Number :";
			cin>>Rollno;
			cout<<"\nEnter Maths Marks :";
			cin>>Math;
			cout<<"\nEnter Science Marks :";
			cin>>Sci;
		}
		
		void show()
		{
			cout<<"\n--------------------------------";
			cout<<"\nRoll no : "<<Rollno;						
			cout<<"\nMath Marks : "<<Math;
			cout<<"\nScience Marks : "<<Sci;
			cout<<"\nTotal Marks : "<<(Math+Sci);
		}
		
};

int main()
{
	Result Res;													
	Res.set();
	Res.show();
	return 0;
}