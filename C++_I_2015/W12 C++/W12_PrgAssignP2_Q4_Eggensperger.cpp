// week12.cpp	
// Description: Write a program to have the user input 4 friends' names. 
// Output should show names stored in array.
// Author: Mariya Eggensperger
// Date: 11/23/2015
// Compiler: Dev-C++ 5.11

#include <iostream>
#include <string>
using namespace std; 

int main()
{
	const int size=4; // maximum array of four friends
	std::string namesArray[size]; 
	std::string names; 
	
cout << "Enter four friends' names: "; 

for (int i=0; i<size; i++)
{
	cin >> names; 
	namesArray[i]=names; 
}
for (int i=0; i<size; i++)
{
	cout << "Your friends' names are: " << "\n" << " " << namesArray[i]; 
}
return 0; 
}
