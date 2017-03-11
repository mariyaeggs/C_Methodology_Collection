// Week5.cpp
// Description: From Textbook. Page 187 #6
// A machine purchased for $28000 is depreciated at a rate of $4000 a year for 7 years. Write, compile, and run a C++ program that 
// computes and displays a depreciation table for 7 years. 
// Author: Mariya Eggensperger
// Date: 10.5.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
#include <iomanip>
using namespace std; 

// a table showing the depreciation of a purchased machine during a 7-year span.

int main () //initialize main function
{
	// declare constants
	
	const int DEPREC=4000;
	const int MAX_VAL=28000;
	
	//declare variables 
	
	int year,
		endyearVal,
		accuDeprec; 
		
	// illustrate desired table
	
	cout << "YEAR   DEPRECIATION   END-OF-YEAR \r\n\t\t\tVALUE\t\t   ACCUMULATED   \n\t\t\t\t\tDEPRECIATION\t\t\t\t\t\n"; // **trouble with the formatting! 

	year = 1; 
	accuDeprec=DEPREC;

	// set while parameter
	
	while (year <= 7)
	{
		endyearVal = MAX_VAL-accuDeprec;
		
		//sets width of columns/rows
		cout << setw(2) << year << fixed << setw(12) << DEPREC << setw(16) << endyearVal << fixed << setw(20) << accuDeprec << fixed << endl; 
			
			year++; 
			accuDeprec=accuDeprec+4000;
	}
return 0;	
}
