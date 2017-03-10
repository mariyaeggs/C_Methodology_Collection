// variable.cpp	
// Description: Write a program that computes the tip for a restaurant meal. 
//The user will input the amount of the bill, then the program will compute the tip, at the rate of 15%. 
//Output should show the total amount to be paid. Do not worry about precision of the output.
// Date: 09.14.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
using namespace std; 

int main()
{

	float value1= 0.15,
	      value3,
	 	  totalTip,
	 	  totalBill; 
	
	cout << "How much was the bill for the meal? ";
	cin >> value3;
	
	totalTip = (value3*value1);	
	totalBill= (totalTip+value3);
	
	cout << "The tip is  " << totalTip << endl; 
	cout << "The total bill is  " << totalBill << endl;
	
	return 0;
			
} 
