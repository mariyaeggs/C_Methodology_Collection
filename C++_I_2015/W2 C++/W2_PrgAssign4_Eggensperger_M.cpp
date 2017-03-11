// variable.cpp	
// Description: Write a program that is like a MadLibs game. In MadLibs, part of a story is given, but some words are left out.
// Author: Mariya Eggensperger
// Date: 09.14.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
using namespace std; 

int main()
{
	string word1;
	string govAgency;
	string word3,
	       word4,
		   word5;
	int num1;
	string continent; 
	
	cout << "Enter an adjective:  ";
	cin >> word1;
	cout <<"Enter a two digit integer:  ";
	cin >> num1;
	cout << "Enter any governmnt agency's formal name:  ";
	cin >> govAgency;
	cout << "Enter an adverb:  ";
	cin >> word3;
	cout << "Enter any verb:  ";
	cin >> word4;
	cout << "Enter a past tense verb related to traveling:  ";
	cin >> word5; 
	cout << "Enter a recognized continent:  ";
	cin >> continent; 
	
	cout <<"There once was an " << word1 << " man, who could speak " << num1 << " languages. He grew tired of working for the " << govAgency << ", so he, " << word3 <<"\n" <<  word4 << " his job and  " 
	<< word5 << " to " << continent << "." << endl;
	
	
	return 0;
			
} 
