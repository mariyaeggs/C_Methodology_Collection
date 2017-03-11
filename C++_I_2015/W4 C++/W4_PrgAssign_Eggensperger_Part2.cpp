// Week4.cpp
// Description: Write a program that will demonstrate your ability to use the 
// sqrt, ceil, fabs, and floor functions of the <cmath> library, in addition to formatting output.
// Author: Mariya Eggensperger
// Date: 09.25.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip> // for std:: setprecision
using namespace std; 


int main()
{
	float fValue;
	float roundUp,
		roundDown,
		squareRoot,
		intFloor,
		negativeRoot;
		
	cout << "Enter a floating point number: \n";
	cin >> fValue; 	
	roundUp=ceil(fValue);

	// cout << roundUp;
	roundDown=floor(fValue);
	// cout << roundDown;
	squareRoot=sqrt(fValue);
	// cout << squareRoot;
	intFloor=fabs(fValue); 
	// cout << intFloor;
	negativeRoot=sqrt(fValue*-1);
	// cout << negativeRoot;
	

	cout <<"The next higher integer is: " << roundUp << ".\n"; 
	cout << "and the next lower integer is : " << roundDown << ".\n";
	
	cout << "The square root of  " << fValue << " is " << squareRoot <<".\n"; 
	
	
	if (fValue<0)
	{
	std::cout << std::setprecision(4); // because we want to show all 3 significant digits in fValue so, we input to the 4th precision.
    std::cout << negativeRoot << std::endl;
	cout << "Negative number changed to positive compliment.\n"; 
	cout << "The square root of  " << fValue*-1 << " is " << negativeRoot;	
	}

	return 0;
}
