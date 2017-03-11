// Week5.cpp
// Description: From Textbook. Page 199 # 6
// Write a C++ program to convert meters to feet. The program should request the starting meter value, the number of coversions to be made and
// the increment between metric values. The Display should have approprite headings and list the meters and corresponding feet value. 
//If the number of iterations is greater than 10, have your program substitute a default increment of 10. 1 meter = 3.281
// Author: Mariya Eggensperger
// Date: 10.5.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
#include <iomanip>
using namespace std; 

// a table showing the depreciation of a purchased machine during a 7-year span.

int main () //initialize main function
{
	// there are no constants to declare
	
	//declare all integer variables 
	
	int                                                                                                                                                                                                                                    start, //starting value
		convo, // number of conversions to be made
		step, //increments to be made less than or equal to 10
		increm, // increment between metric values
		meter,  // for meter conversion
		count=1; // decriment by a count of 1
	
	double feet; // double point float 
		

	
	cout << "Enter starting value:   ";
	cin >> start;
	cout << "Enter the number of conversions to be made:  "; 
	cin >> convo; 
	cout << "Enter the increment between metric values:  ";
	cin >> increm; 
	
	if (increm>10)
	{
		cout << "This number is too large; default value of 10 applied.\n"; 
		step=10; 
	}
	else
	{
		cout << "Enter the increment between metric values: "; 
		cin >> step; 
	}
	// set meter input to start
	meter= start;
	 
	// illustrate table to be shown
	cout << "\nFEET\t       METERS\n"
		 << " -----          ------\n";
		 
	cout << setiosflags(ios::showpoint) //for setprecision of decimals
	 	 << setprecision(3);
	 	 
	 	 
	while (count <= increm)
    {
    	feet= meter*3.28; 
    	cout << setw(2) << fixed << feet
    		 << setw (12) << fixed << meter << endl; 	 
    		 
    	meter = meter + step; // step is no bigger than 10
    	count++; // decrimented
	}			 
	return 0;	
}
