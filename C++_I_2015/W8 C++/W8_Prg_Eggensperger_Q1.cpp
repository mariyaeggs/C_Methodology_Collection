// Week8.cpp
// Description: Write a program to convert yards to inches. 
// The user should input a number of yards; output should show the equivalent inches.
// Date: 10.25.2015
// Name: Mariya Eggensperger
// Compiler: Dev-C++ 5.11

#include <iostream>
#include <cmath>
using namespace std; 


int findConvert(int,int); // function declaration prototype

int main()
{
	int inch, 
		yard,
		convert; 
	
	cout << "Input the number of yards: "; 
	cin >> yard; 
	
	convert=findConvert(inch,yard); // function called here
	
	return 0; 	
}
// following is the function convert()

int findConvert(int inch, int yard)
{					// start of function body
	int convert;   // variable declaration
	
		convert=yard*36; //convert user input (yard) to inches
		cout << "\nYour " << yard << " yards equals " << convert << " inches."<< endl << endl;
		
	
	return convert; // return statement
} // end of function body and function
