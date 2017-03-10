// Week8.cpp
// Description: Write a program to compute the area of a rectangle
// Date: 10.25.2015
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
	side1=get_side(); 
	cout << "\nEnter side 2 of a rectangle to comput its area:  "; 
	side2=get_side();
	length=side1*side2; // equation for are is A=L*W 
	// cout << earnings *tactic to check value of mpg
	description(length); 
	 
	return 0;  
}
float get_side() //function passes both sides of the rectangle
{
	float side1; 
	cin >> side1;
	return side1;
	float side2; 
	cin >> side2; 
	return side2;  
}
float description(float length)
{
	
	cout << "\nThe area of your rectangle is: " << length << endl;  
	return 0; 
}




