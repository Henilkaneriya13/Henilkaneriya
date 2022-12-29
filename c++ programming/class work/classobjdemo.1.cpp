#include<iostream>
using namespace std;

class student
{
	public :
		int sid;
		string name;
		string email;
		
		void getdetail()
		{
			cout<<"\n enter id : ";
			cin>>sid;
			fflush(stdin);
			cout<<"\n enter name : ";
			//cin>>name;
			getline(cin,name);
			cout<<"\n enter email : ";
			cin>>email;
		}
		
		void showdetail()
		{
			cout<<"\nid : "<<sid;
			cout<<"\nname :"<<name;
			cout<<"\nemail : "<<email;
		}
};

int main()
{
	student abc;
	abc.getdetail();
	abc.showdetail();
	return 0;
}