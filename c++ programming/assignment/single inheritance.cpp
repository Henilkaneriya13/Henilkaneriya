/*Assume a class cricketer is declared. Declare a derived class batsman from cricketer.
	  Data member of batsman. Total runs, Average runs and best performance.
	  Member functions input data, calculate average runs, Display data. (Single Inheritance)
*/

#include <iostream>
using namespace std;


class Cricketer {		
	public:
		int match,notout,runs;
		float avg;

		void getR() {
			cout<<"\nEnter Total matches Played :";				
			cin>>match;
			cout<<"\nEnter number of matches in which the batsman remained NOTOUT :";
			cin>>notout;
			cout<<"\nEnter Total Run Scored :";
			cin>>runs;

		}

};

class Batsman : public Cricketer {	
	public:

		void avgrun() {
			cout<<"\n\nBatting Average = "<<((float)runs/ (match-notout));					
		}

		void data() {
			cout<<"\nTotal Run = "<<runs;
			cout<<"\nTotal Matches Played = "<<match;				
			cout<<"\nNotout = "<<notout;
		}
};
int main()
{
	
	Batsman info;
	info.getR();					
	info.avgrun();
	info.data();
	return 0;
}