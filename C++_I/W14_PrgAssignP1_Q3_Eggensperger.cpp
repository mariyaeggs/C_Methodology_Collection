//week14.cpp
//Description:Write a program that reads the numbers from the file, “temps.txt”, 
//into an array. Print average onto screen.
//Name: Mariya Eggensperger
//Date: 12/5/2015
//Compiler: Dev C++ 5.11

#include <iostream>
#include <fstream>

using namespace std;
// function for division
int division(int[], int, int); 

int main()
{
	ifstream fin; // cin file
	
	fin.open("temps.txt");  // open file "temps.txt"
	
	if (fin.fail()) // check for successful open
	{
		cout << "Unable to open file."; 
		exit(1); 
	}
	int size=365; 
	int array[size];
	int sum=0;
	int average=0;
	int i;
	
	while(true)
	{
		
		if(fin.eof())
		{
			break; 
		}
		for (i=0; i<size; i++)
		{
			fin >> array[i]; 
			sum=sum+array[i];
			average=sum/size; 
		}
		
}
cout << "Average is: " << division(array,sum,size);
}
int division(int array[], int sum, int size)
{	
	ifstream fin; // cin file
	return sum/size;
	fin.close(); 		
} 
	 


