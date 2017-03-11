//week14.cpp
//Description:Write a program to add 3 more people to the “people.txt” file. 
//The new people should be added to the end of the file.
//Name: Mariya Eggensperger
//Date: 12/5/2015
//Compiler: Dev C++ 5.11

#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std; 

//using namespace std; 

int main()
{
	std::ofstream file("people.txt", std::ios::app); // append file
	
	
	// write to file
	if (!file)
	{
		std::cout << "Unable to open file"; 
		exit(1); 
	}
	
	// declare variables
	const int size=3; 
	std::string firstName[size];
	int i; 
	
	while(true) 
	{
		std:: cout << "Names: "; 
		
		for (i=0; i<size; i++)
		{
			std::cin >> firstName[i]; 
		}
		file.close();
		std::cout << "File was successfully open."; 
		system ("pause"); 
		return 0; 
	}
}



