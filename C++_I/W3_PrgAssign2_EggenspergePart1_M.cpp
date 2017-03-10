//elseif.cpp
// Description: Show mastery of the else/if statements
// Author: Mariya Eggensperger
// Date: 09.21.2015
// Compiler: Dev-C++

#include <iostream>
using namespace std;

int main()
{
	string input;
			
	cout << "What shape would you like to use, a circle (c) or a square (s)? Type in either a (c) or an (s):  \n";
	cin >> input;
	
	if (input=="c" or input=="circle")
	{
		int	num1;
		int totalCircle;
		
		cout << "What is the radius of the circle?  \n";
		cin >> num1;
		
		totalCircle=3.141593*num1*num1;
		
		cout <<"The area of that shape is  " << totalCircle << " square units.\n";
	}
	else
	{
		int num2;
		int totalSquare;
		
		cout << "What is the length of one of the sides of the square?  \n";
		cin >> num2;
		
		totalSquare=num2*num2;
		
		cout << "The area of that shape is " << totalSquare << "square units.\n";
		
		return 0;
		
	}
}



