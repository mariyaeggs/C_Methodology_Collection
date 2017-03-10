// Week5.cpp
// Description: From Textbook. Page 187 #5
// Write, compile, and run a C+ program that converts feet to meters. The program should display feet from 3 to 30 inches in 3-foot increments 
// and the corresponding meter equivalents. Use the relationship 3.28 feet = 1 meter
// Author: Mariya Eggensperger
// Date: 10.5.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
#include <iomanip>
using namespace std; 

// a program to convert feet to meters

int main () //initialize main function
{
	const int MAX_FEET=30;
	const int START_VAL=3;
	const int STEP_SIZE=3;
	
	int feet= STEP_SIZE;
	double meter; 
	
// illustrate table 

	cout << "FEET   METERS\n"
		 << "----   ------\n";
		 
// set output formats for floating-point numers only and to 3

	cout << setiosflags(ios::showpoint)
	 	 << setprecision(3);
		  
	while (feet <= MAX_FEET)
    {
    	meter= feet/3.28; 
    	cout << setw(4) << feet
    		 << setw (9) << meter << endl; 
    		 
    //3-foot increments		 
    		 
    	feet = feet + STEP_SIZE;
	}
return 0; 	
}

