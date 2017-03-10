// conditionif.cpp
// Description : Demonstrate mastery of the if condition. Part I
// Author: Mariya Eggensperger
// Date: 09.21.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
using namespace std;

int main()
{

	string name;
	
	cout << "What is your first name?  ";
	cin >> name;
	
	int grade;
	
	cout <<"Enter your class grade rounded to the nearest hundredths:  ";
	cin >> grade; 
		
	if (grade>=90)
		cout << name << ", congratulations, you have an A in class!";
	if (grade>=80 && grade<=89 )
		cout << name << ", that's great, you have a B in class!";
	if (grade>=70 && grade<=79 )
		cout << name << ", you have a C in class.";
	if (grade>=60 && grade<=69)
		cout << name << ", you have a D in class.";
	if (grade<60)
		cout << name << ", you did not pass this class. Your grade is an F.";

	
		return 0;

}
