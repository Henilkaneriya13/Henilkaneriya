#include<iostream>
using namespace std;

class student
{
	public :
		int sid;
		string name;
		string email;
		
	
		
		void showdetail(int sid,string name,string email)
		{
			cout<<"\nid : "<<sid;
			cout<<"\nname :"<<name;
			cout<<"\nemail : "<<email;
		}
};

int main()
{
	student abc;
		int sid;
		string name;
		string email;
	
	
			cout<<"\n enter id : ";
			cin>>sid;
			fflush(stdin);
			cout<<"\n enter name : ";
			//cin>>name;
			getline(cin,name);
			cout<<"\n enter email : ";
			cin>>email;
			abc.showdetail(sid,name,email);
		
	return 0;
}