// Week9.cpp
// Description: Rewrite the following programs, using at least 4 functions. 
//Ths is the rewrite from Week 8 #4
// Date: 10.30.2015
// Name: Mariya Eggensperger
// Compiler: Dev-C++ 5.11

#include <iostream>
using namespace std; 

float get_side(); 
float description(float length);

int main() // main() function
{
	float side1, // call variables
		  side2,
		  length; // primitive
		
		  
	cout << "Enter side 1 of a rectangle to compute its area: "; 
	cin >> side1; 
//	side1=get_side(); 
	cout << "\nEnter side 2 of a rectangle to comput its area:  "; 
	cin >> side2; 
//	side2=get_side();
	length=side1*side2; // equation for are is A=L*W 
	// cout << earnings *tactic to check value of mpg
	description(length); 
	 
	return 0;  
}
float get_side() //function passes both sides of the rectangle
{
	float side1; 
//	cin >> side1;
	return side1;
	float side2; 
//	cin >> side2; 
	return side2;  
}
float description(float length)
{
	
	cout << "\nGood work chum! The area of your rectangle is: " << length << endl;  
	return 0; 
}




