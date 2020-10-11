#include <iostream>
using namespace std;

int main()
{
	//for first time
	int hour1,minute1;
	//for second time
	int hour2,minute2;
	//for the total(sum) time
	int hour,minute;

	//taking the input from user
	cout<<"------ Input starting time -------- "<<endl;
	cout<<"Hours: "; cin>>hour1;
	cout<<"Minutes: "; cin>>minute1;

	//taking the input from user
	cout<<"------ Input duration --------"<<endl;
	cout<<"Minutes: "; cin>>minute2;

	//adding the entered times
	minute=minute1+minute2;
	hour=(hour1+hour2+(minute/60))%24;
	minute=minute%60;

	//displaying total time
	cout<< " " <<hour<<":"<<minute<<endl;

	return 0;
}
