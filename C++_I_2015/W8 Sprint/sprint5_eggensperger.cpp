// sprint.cpp
// Descrioption: True/False for same ending integer number
// Author: Mariya Eggensperger
// Date: 10.19.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
#include <iomanip>
using namespace std; 

int main ()
{
	int num1,
		num2; 
		
	cout << "Enter two numbers: ";
	cin >> num1 >> num2; 
	num1=num1%10;
	num2=num2%10;
	
	if (num1==num2)
	{
		cout << "True.";
	}
	else
	{
		cout << "Go sit on a pipe."; 
	}

	return 0; 
}
