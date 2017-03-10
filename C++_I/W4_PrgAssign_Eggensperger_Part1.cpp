// Week4.cpp
// Description:  Write a program to find out if a triangle described by the user 
// is a right triangle. To be a right triangle, there must be 3 sides with the relationship  a2 + b2 = c2
// Author: Mariya Eggensperger
// Date: 09.25.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
using namespace std; 

int main()
{
	float a, b, c;
	
	cout << "Enter the lengths of three sides of a triangle:  ";
	cin >> a >> b >> c; 
	
	if (c*c==a*a+b*b)
	cout << "That is a right triangle.";
	
	else
	cout << "That is not a right trianble.";
	
	return 0;
}
