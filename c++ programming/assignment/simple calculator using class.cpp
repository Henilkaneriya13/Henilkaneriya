#include<iostream>
using  namespace std;

class Calculator
{
	public:												
	int a,b;												
	
	void getinput()
	{														
		cout<<"\nEnter A : ";
		cin>>a;
		cout<<"\nEnter B : ";
		cin>>b;		
	}
	void showinput()
	{														
		cout<<"\nA = "<<a<<"\nB = "<<b;
	}
	int add()
	{														
		return (a+b);
	}
	int subtract()
	{														
		return (a-b);
	}
	int multi()
	{														
		return(a*b);
	}
	float divide()
	{														
		if (b==0)											
		{												
			cout<<"\nDivision by zero."<<endl;
			return 0;
		}
		else
		{
			return ((float)a/b);
		}
	}
		
};
int main()
{	

	int op;	
	cout<<"\n\t\tXxXxXxXxXxXxXxXxX CALCULATOR XxXxXxXxXxXxXxXxX\n\n";
	Calculator cal;											
	cal.getinput();										
	cal.showinput();										
	cout<<"\nEnter 1 for Addition."<<"\nEnter 2 for Subtraction."<<"\nEnter 3 for Multiplication."<<"\nEnter 4 for Divsion.";
	cout<<"\n\nEnter An Operator\n";						 
	cin>>op;
	
	switch(op)
	{
		case 1 : cout<<"\nAddition = "<<cal.add();								
				break;
		
		case 2 : cout<<"\nSubtraction = "<<cal.subtract();
				break;
				
		case 3 : cout<<"\nMultiplication = "<<cal.multi();
				break;
				
		case 4 : cout<<"\nSubtraction = "<<cal.divide();
				break;	
		default : cout<<"\nEnter Valid Choice...";	
				break;
					
	}
	return 0;
}