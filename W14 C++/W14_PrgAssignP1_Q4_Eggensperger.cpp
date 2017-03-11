//week14.cpp
//Description: Write a program that reads a data.dat file
//Name: Mariya Eggensperger
//Date: 12/5/2015
//Compiler: Dev C++ 5.11

#include <iostream>
#include <iomanip>
#include <fstream> // files
using namespace std; 

int main()
{
	ifstream fin; 
	
	
	fin.open("data.txt"); 
	
	if (!fin)
	{
		cout << "Unable to open file."; 
		exit(1); 
	}
		const int size=1000; 
		float number[size]={0};
		int i;
		
		
	while (true)
	{
		for (i=0; i<10000; i++)
		{
			if (number[i]<0)
			{
				number[size] == number[size] * -1; // make num positive
				
				cout << number[size]; 
			}
		
	}
	fin.close();
	cout << "File was successfully written."; 
	system("pause"); 
	return 0; 	
	}
}
