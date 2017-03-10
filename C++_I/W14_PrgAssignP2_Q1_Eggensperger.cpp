//week14.cpp
//Description: Write a program that creates a data 
//file ("randNums.txt") that contains 100 random numbers, 
//between 1 & 1000, inclusive.
//Name: Mariya Eggensperger
//Date: 12/5/2015
//Compiler: Dev C++ 5.11


#include <iostream>
#include <iomanip>
#include <fstream> // files
#include <cstdlib>
#include <ctime> // random number

using namespace std; 



//main function
int main()
{
	
	ofstream file("randNums.txt"); // name and open file
	
	// write to file
	
	if (!file) // check for successful open of file
	{
		cout << "Unable to open file.";
		exit(1); 
	}
	
		// declare variables
		const int size=100;
		int array[size]={0}; 
		int i;
		
	while(true)
	{
		
		srand(time(0)); // seed random number
		 
		for (int i=0; i<=size; i++) // maximum of size==365 elements allowed 
		{
			
			((array[i]=rand() % 1000)+1); // range 45 to 90
			
			 file << array[i] << " "<< endl;
			
		
			//std::cin.get(); // pause screen
			
		}
		
	}
	file.close(); // close file
		cout << "File was successfully written."; 
		system("pause"); 
		return 0; 
}

		
