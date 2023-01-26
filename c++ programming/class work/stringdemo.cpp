#include<iostream>
using namespace std;

int main()
{
	string name1 = "henil";
	string name2;
	cout<<"name : "<<name1;
	name2 = name1;
	cout<<"\nname : "<<name2;
	cout<<"\nstring concatenate : "<<name1 + name2;
	int len= name2.size();
	cout<<"\nstring length : "<<len; 
}