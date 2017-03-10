// week12.cpp	
// Description: Write a program that asks the user to enter 
// eight words, stored in an array and prints only every other word.
// Author: Mariya Eggensperger
// Date: 11/23/2015
// Compiler: Dev-C++ 5.11

#include <iostream>
#include <string>
using namespace std; 

int main()
{
	
const int size=8; // maximum array of eight words
std::string wordArray[size];
std::string words; 

cout << "Enter up to eight words: "; 

for (int i=0; i<size; i++) // prints out only every other word
{

	cin>> words; 
	wordArray[i]=words; 
}
for (int i=0; i<size; i+=2) // prints every other word 
{
	cout << "\n" << " " << wordArray[i];  
}
return 0; 
}




