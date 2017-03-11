// simle1input.cpp
// Description: Demonstration of simple 1-input cin.
// Author: Mariya Eggensperger
// Date: 09.10.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
using namespace std; 

int main()
{
	int age;
	string name; 
	
	cout << "What is your name? ";
	cin >> name; 
	cout << "How old are you?"  ;
	cin >> age; 
	
	cout << "So " << name << ", you are " << age << " years old.\n\n";
	
	return 0;
	
}
