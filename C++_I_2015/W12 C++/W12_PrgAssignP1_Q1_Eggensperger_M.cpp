// Week12.cpp
// Description: Write a program that lets the user enter 10 integers into an array.
// The array then sorts all even and odd numbers. 
// Author: Mariya Eggensperger
// Date: 11/23/2015
// Compiler: Dev-C++ 5.11

#include <iostream>
using namespace std;

int main()
{
	const int SIZE=10; // maximum array integers
	int num_array[SIZE]; // takes in 10 integers
	int even=0; 
	int odd=0;
 	int integer;
  	
 	cout << "Input integers: " << endl;  
 	
 	for (int i=0; i<SIZE; i++)
 	{
    	cin >> integer;
		num_array[i]=integer; 
	}
	 for (int i=0; i<SIZE; i++)
	 {
	 	cout << "Array[" << i << "] => " << num_array[i]; 
		 if (num_array[i] % 2 ==0) // even
	 	{
	 		even++;
	 		cout  << " => " << "even"; 
		 }
		 else
		 {
		 	odd++; 
		 	cout  << " => " << "odd"; 
		 }
		 cout << endl; 
	}
	cout << "\n\nEven: " << even << " => " << "Odd: "<< odd <<  endl;
	
	return 0; 
	
}

 
