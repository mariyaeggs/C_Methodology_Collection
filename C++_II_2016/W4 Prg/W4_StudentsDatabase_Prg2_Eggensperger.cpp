// Name: Mariya Eggensperger 
// Date: 03/7/2016
// Dev. C++ 5.11
// Write a program that stores information about students. 
#include <iostream>
#include <string>

using namespace std;

class Date{
	public:
	   int day;
	   int month;
	   int year;
	   Date(int d, int m, int y){
	       day= d; 
	       month = m;
	       year = y;
	   }
	   Date(){
	   	   day = 1;
	       month = 1;
	       year = 2000;
	   }
   bool operator<(Date &d){
       if(year > d.year){
           return true;
       }
       else if(year == d.year && month > d.month){
           return true;
       }
       else if(month == d.month && day > d.day){
           return true;
       }
       else{
           return false;
       }
   }
};
class Student{
	private:
	   string firstName;
	   string lastName;
	   Date dob;
	   string major;
	public:
	   Student(string fN, string lN, string m, Date d){
	       firstName = fN;
	       lastName = lN;
	       major = m;
	       dob = d;
   		}
   bool operator <(Student &s){
       return dob < s.dob;
   }
};
int main(){
   Student s1 = Student("Mariya", "Eggensperger", "Computer Science", Date(1, 1, 1992));
   Student s2 = Student("Scott", "Eggensperger", "Industrial Engineering", Date(6, 24, 1991));
   if(s1 < s2){
       cout << "Scott is younger than Mariya" << endl;
   }
   else if(s2 < s1){
       cout << "Mariya is younger than Scott" << endl;
   }
   else{
       cout << "They were born on the same day" << endl;
   }
   return 0;
}


