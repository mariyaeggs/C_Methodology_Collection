//Mariya Eggensperger
// Date: 3/7/2016
// Dev C++ 5.11
// Week 4: Design and implement a program for a Time class.

#include <iostream>
#include <iomanip>
using namespace std;

#ifndef TIME_H
#define TIME_H
 
class Time {
	private: 
		int secondOne, minuteOne, hourOne; 
		int secondTwo, minuteTwo, hourTwo; 
		
	public: 
	Time() { 
	// Time 1
		secondOne = 0; 
		minuteOne = 0; 
		hourOne = 0; 
		void setSecondOne(int); 
		int secOne(); 
		void setMinuteOne(int);
		int minOne();  
		void setHourOne(int);
		int hrOne(); 
		void show();
		
	//Time 2
		secondTwo =0; 
		minuteTwo= 0; 
		hourTwo = 0; 
		void setSecondTwo(int); 
		int secTwo(); 
		void setMinuteTwo(int); 
		int minTwo(); 
		void setHourTwo(int); 
		int hrTwo(); 
		void show(); 
		
		//checks if Time1 & Time2 & have equivalents 
		int timeComparison(Time);
}; 
//Time 1
void setSecondOne(int userSecondOne) { 
	secondOne = userSecondOne; 
}
int secOne(){
	return 0; 
}
void setMinuteOne(int userMinuteOne) { 
	minuteOne = userMinuteOne; 
}
int minOne() {
	return 0;	
}
void setHourOne(int userHourOne) { 
	hourOne = userHourOne; 
} 
int hrOne(){
	return 0; 
}
// Time 2
void setSecondTwo(int userSecondTwo) { 
	secondTwo = userSecondTwo; 
}
int secTwo(){
	return 0;
}
void setMinuteTwo(int userMinuteTwo) { 
	minuteTwo = userMinuteTwo; 
} 
int minTwo() {
return 0;
}
void setHourTwo(int userHourTwo) { 
	hourTwo = userHourTwo;}
int hrTwo(){
	return 0;
}

}; 
#endif
int main() {

Time t1; // Time 1
Time t2; // Time 2

//Time 1
int userSecondOne, userMinuteOne, userHourOne;
//Time 2
int userSecondTwo, userMinuteTwo, userHourTwo;  

//Time 1 and Time 2 user inputs 
//Time 1 input
cout << "----------------USER INPUT---------------\n" << endl;
cout << "Input second(1): "; 
cin >> userSecondOne; 
cout << endl;
cout << "Input minute(1): "; 
cin >> userMinuteOne; 
cout << endl;
cout << "Input hour(1): "; 
cin >> userHourOne; 
cout << endl;

//Time 2 input 
cout << "Input second(2): "; 
cin >> userSecondTwo; 
cout << endl;
cout << "Input minute(2): "; 
cin >> userMinuteTwo; 
cout << endl;
cout << "Input hour(2): "; 
cin >> userHourTwo; 
cout << endl;

cout << "----------------ADDITION------------------\n" << endl;
cout << "------------Time(1) & Time(2)-------------\n" << endl;
cout << "SECONDS Total: " << (userSecondOne+userSecondTwo) << "\n";   
cout << endl;
cout << "MINUTES Total: " << (userMinuteOne+userMinuteTwo) <<"\n"; 
cout << endl;
cout << "HOURS Total: " << (userHourOne+userHourTwo) <<"\n"; 
cout << endl;

//test functions for Time 1
t1.setSecondOne(userSecondOne); 
t1.setMinuteOne(userMinuteOne); 
t1.setHourOne(userHourOne); 

//test functions for Time 2
t2.setSecondTwo(userSecondTwo); 
t2.setMinuteTwo(userMinuteTwo); 
t2.setHourTwo(userHourTwo); 
	
// check for equality
	cout << "---------------COMPARISON-----------------\n" << endl;
	cout << "------------Time(1) & Time(2)-------------\n" << endl;
	if (userSecondOne == userSecondTwo){ 
		cout << "Equal seconds" << "\n" << endl; 
	} 
	if (userSecondOne != userSecondTwo) {
		cout << "NonEqual seconds" << "\n" << endl;
	} 
	if (userMinuteOne == userMinuteTwo){
		cout << "Equal minutes" << "\n" << endl;
	}
	if (userMinuteOne != userMinuteTwo) {
		cout << "NonEqual Minutes" << "\n" << endl;
	}
	if (userHourOne == userHourTwo){
		cout << "Equal Hours" << "\n" << endl;
	}
	if (userHourOne != userHourTwo) {
		cout << "NonEqual Hours" << "\n" << endl;
	}
	
return 0;
}






