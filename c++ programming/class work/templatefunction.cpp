#include<iostream>
using namespace std;

template <typename T>
T add(T a,T b)
{
	return a+b;
}

int main()
{
	cout<<"\nadd using integer type : "<<add<int>(10,20);
	cout<<"\nadd using float type : "<<add<float>(45.26f,27.78f);
	cout<<"\nstring concatenate : "<<add<string>("tops ","tech");
	return 0;
}