//week14.cpp
//Description:Write a program that creates a text 
//file with words entered by the user. The user should 
//be asked to enter the names of 8 people. Each person 
//should be stored as a separate line in the data file.  
//Name: Mariya Eggensperger
//Date: 12/5/2015
//Compiler: Dev C++ 5.11

#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>

int main()
{
	std::ofstream file("people.txt"); 
	
	// write to file
	if (!file)
	{
		std::cout << "Unable to open file"; 
		exit(1); 
	}
	
	// declare variables
	const int size=8; 
	std::string firstName[size]; 
	std:: string lastName[size];  
	int i; 
	
	while(true) 
	{
		std:: cout << "Names: " << std::endl; 
		
		for (i=1; i<size; i++)
		{
			
			std::cin >> firstName[i]; 
			file << firstName[i] << " "<< lastName[i] << std::endl;
		}
		for (i=1; i<4; i++)
		{
			std:: cin >> lastName[i]; 
			file << lastName[i] << std::endl; 
		}
		
		file.close();
		std::cout << "File was successfully open."; 
		system ("pause"); 
		return 0; 
	}
}
