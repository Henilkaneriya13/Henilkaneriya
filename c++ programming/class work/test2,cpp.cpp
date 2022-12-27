#include<iostream>
using namespace std;
int main()
{ 
  	//int a = 23,b = 43;
  	int a,b,n;
  	cout<<"\nenter a : ";
  	cin>>a;
  	cout<<"\nenter b : ";
  	cin>>b;
  	cout<<"\na = "<<a<<"b = "<<b;
  	
  	cout<<"\n\n choice menu"<<endl;
  	
  	cout<<"\npress 1 for addition";
  	cout<<"\npress 2 for substraction";
  	cout<<"\npress 3 for multiplication";
  	cout<<"\npress 4 for divition";
  	
  	cout<<"\n enter your choice : ?";
  	cin>>n;
  	
  	switch(n)
  	{
  		case 1:
  		cout<<"\naddition : "<<(a+b);
		break;
		
			
	case 2:
  		cout<<"\nsubstraction : "<<(a-b);
		break;
		
		case 3:
  		cout<<"\nmultiplication : "<<(a*b);
		break;
		
		case 4:
  		cout<<"\ndivision : "<<(a/b);
		break;  		
		 
	}
	return 0;
}