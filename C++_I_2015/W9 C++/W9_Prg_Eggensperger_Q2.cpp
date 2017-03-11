// Week9.cpp
// Description: Rewrite the following programs, using at least 4 functions. 
//Ths is the rewrite from Week 8 #2
// Date: 10.30.2015
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
	cin >> miles; 
//	miles=get_miles(); //float miles equals the users mile input 
	cout << "\nEnter the gallons of gas used: "; 
	cin >> gallons;
//	gallons=get_gallons();
	mpg=miles/gallons;
	// cout << mpg *tactic to check value of mpg
	description(mpg); //the answer description
	 
	return 0;  
}
	float get_miles()
	{
	float miles; 
//	cin >> miles;
	return miles; 
	}
	float get_gallons()
	{	 
	float gallons; 
//	cin >> gallons; 
	return gallons; 
	}  
	float description(float mpg)
	{
	
	cout << "\nWell, that's weird. Your result is " << mpg << " mpg." << endl;  
	return 0; //end of code function and end of function
}




