// Week8.cpp
// Description: Write a program that computes the miles per gallon a car gets. 
// Date: 10.25.2015
// Name: Mariya Eggensperger
// Compiler: Dev-C++ 5.11

#include <iostream>
using namespace std; 

float get_miles(); // get_miles function declaration
float get_gallons(); // get_gallons function declaration
float description(float mpg); // description function declaration

int main() // main() function
{
	float miles, // call variables
		  gallons,
		  mpg; // primitive
		
		  
	cout << "Enter the number of miles traveled: "; 
	miles=get_miles(); 
	cout << "\nEnter the gallons of gas used: "; 
	gallons=get_gallons();
	mpg=miles/gallons;
	// cout << mpg *tactic to check value of mpg
	description(mpg); 
	 
	return 0;  
}
float get_miles()
{
	float miles; 
	cin >> miles;
	return miles; 
}
float get_gallons()
{	 
	float gallons; 
	cin >> gallons; 
	return gallons; 
}  
float description(float mpg)
{
	
	cout << "\nThe result is " << mpg << " mpg." << endl;  
	return 0; //end of code function and end of function
}




