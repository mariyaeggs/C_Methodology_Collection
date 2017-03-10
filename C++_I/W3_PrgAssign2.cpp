//elseif.cpp
// Description: Show mastery of the else/if statements
// Author: Mariya Eggensperger
// Date: 09.21.2015
// Compiler: Dev-C++

#include <iostream>
using namespace std;

int main()
{
	int value;
	int num1,
		num2;
	int sumTotal;
			
	cout << "Enter two numbers to be added (separated by a space):  \n";
	cin >> value;
	
	
	if (value==num1+num2)
	{
		int num1, 
			num2; 
		int sumTotal; 
	
		cout << "What is the sum of the two numbers?  ";
		cin >> num1 >> num2; 
		
		sumTotal=num1+num2; 
		
		cout <<"Hooray! That is the correct answer.\n";
	}	
	else  
	{
		int num1, 
			num2; 
		int sumTotal; 
		
		cout << "What is the sum of the two numbers?";
		cin >> num1 >> num2;
	
		sumTotal= num1+num2; 
		
		cout << "No, that is not correct. Try again.\n";
		
		return 0;
	
	}
			
}



