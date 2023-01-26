#include<iostream>
using namespace std;

class raj{
	private:
		int money;
		friend int kush(raj);
		public:
			raj()
			{
				money = 0;
			}
};

int kush(raj r){
	r.money = 5000;
	return r.money;
}
int main(){
	
	raj r;
	cout<<"\nkush has given rs."<<kush(r)<<" to raj.";
	return 0;
}