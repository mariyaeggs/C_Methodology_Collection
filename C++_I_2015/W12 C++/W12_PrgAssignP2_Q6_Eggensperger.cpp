// week12.cpp	
// Description: Functions program. Write a program that fills an array 
// of 50 integers with random numbers. Find largest, smallest, average. 
// Author: Mariya Eggensperger
// Date: 11/23/2015
// Compiler: Dev-C++ 5.11

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

// function prototypes
void fill_array(int[],int);
void compute_max(int[], int, int&);
void compute_min(int[],int,int&); 
void compute_avrg(int[],int,int,int&); 


// main function
int main()
{
	const int size=50; 
	int num_array[size];
	int max=num_array[0];
	int min=num_array[0]; 
	int avrg=0; 
	int total=0; 

	// call functions
	fill_array(num_array, size); 
	compute_max(num_array, size, max); 
	compute_min(num_array, size, min); 
	compute_avrg(num_array, size, total, avrg);
	
	// cout of max, min, avrg
	
	cout << endl << endl;
     cout<<setw(10)<<"Max #: "<<max<<setw(10)<<" Min #: "<< min << setw(10)<<" Avrg #: "<<avrg<< endl;

	
	return 0; 	 	
	
}
// function that prints fifty random numbers
void fill_array(int num_array[], int size)
{

	
	srand((unsigned)time(0)); // seed random number
     
    for(int i=0; i<size; i++)
	{ 
        num_array[i] = (rand() % 50 )+1; // generates random number 1-50
         
        cout << num_array[i] << " "; // OR << endl; 
 	} 
  	return; 
}
// function to compute maximum array values 
void compute_max(int num_array[], int size, int &max)
{
	
	for(int i = 0; i <size; i++) 
	{
    	if (num_array[i] > max)
    	{
    		max=num_array[i]; 
    	
		}
		return;	
	}

}
// function to compute minimum array values
void compute_min(int num_array[], int size, int &min)
{
	for (int i=0; i<size; i++)
	{
		if (num_array[i] < min)
		{
			min=num_array[i]; 
			
		}
		return;
		
	}
}
//function to compute average of array values
void compute_avrg(int num_array[], int size, int total, int &avrg)
{
	for (int i=0; i<size; i++)
	{
		total=total+num_array[i];	
	}
	avrg=total/50; 
	return;
}


