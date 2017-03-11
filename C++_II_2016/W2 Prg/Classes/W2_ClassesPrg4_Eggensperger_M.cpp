// Name: Mariya Eggensperger 
// Dev: C++ 5.1.1
// Week2 Class Assignment p.24, #19
// Create a Time class. The class should have 
// three variables for hours, minutes, seconds.

#include <iostream>
#include <iomanip>

using namespace std;

class Time{

private:
   float hours;
   float minutes;
   float seconds;

public:
   Time(){
       hours = 0;
       minutes = 0;
       seconds = 0;
   }
   void setHours(int userHour){
       hours = userHour;
   }
   double TimeInHours(){
       return ((hours) + (minutes / 60.0) + (seconds / 3600.0));
   }
   void setMinutes(int userMinutes){
       minutes = userMinutes;
   } 
   double TimeInMinutes(){
       return ((hours * 60) + minutes + (seconds / 60.0));
   }
   void setSeconds(int userSeconds){
       seconds = userSeconds;
   }
   double TimeInSeconds(){
       return ((hours * 60) + (minutes * 60) + seconds);
   }
};

int main(){

Time object;
 
float userHours, 
	userMinutes, 
	userSeconds; 
	
	cout << "How many hours: ";
	cin >> userHours;
	cout << endl;
	cout << "How many minutes: ";
	cin >> userMinutes;
	cout << endl;
	cout << "How many seconds: ";
	cin >> userSeconds;
	cout << endl;
	
	//test functions
	object.setHours(userHours);
	object.setMinutes(userMinutes);
	object.setSeconds(userSeconds);
	
	
	//Print to screen
	cout << "------------Calculated Time-------------\n" << endl; 
	cout << "Hours: " << object.TimeInHours() << "\n" << endl;
	cout << "Minutes: " << object.TimeInMinutes() << "\n" << endl;
	cout << "Seconds: " << object.TimeInSeconds() << "\n" << endl;
	cout << "You've some time my friend. Did you bring a book . . . or two . . . fine, three?" << endl;
  
  	return 0;
}

