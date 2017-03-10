#include <iostream>
#include <iomanip>
#include <fstream> // files
#include <cstdlib>
#include <ctime> // random number

using namespace std; 
void bubbleSort(int[]);
void copyAra(int[], const int[]); 

const int size=100;

int main()
{
	ifstream file("randNums.txt");
	ofstream files("newRandNums.txt");
	
	file.open("randNums.txt"); 
	files.open("newRandNums.txt");
	
	
	
		
	if (!file)
	{
		cout << "Unable to open file.";
		return 1; 
	}
	
		// declare variables
		int array[size]={0}; //permanent array
		int ara1[size];
		int ara2[size];
		int i;
		int operations;
		
	copyAra(ara1,array);
	copyAra(ara2,array); 
	bubbleSort(ara1);

		
	while(true)
	{
		file >> array[i]; 
		if (file.eof())
		{
			break;
		}
	}
file.close(); // close file
cout << "File was successfully written."; 
system("pause"); 
return 0; 
}
void bubbleSort(int array[])
{
	
	ofstream files("newRandNums.txt");
	files.open("newRandNums.txt");
	
	int operations=0; 
	bool swap; 
	int temp; 
	int size=100; 
	int j;
	
	cout << "Original values: \n";
	for (int i=0; i<size; i++)
	{
		cout << array[i] << "\t"; 
	}
	cout << endl;
	
	cout << "The bubble sort begins: \n"; 
	for (int i=0; i<size-1; i++)
	{
		operations++; 
		if (array[j]>array[j+1])
		{
			swap=true;
			temp=array[j]; 
			array[j]=array[j+1]; 
			array[j+1]==temp; 
			operations+=3; 	
		}
	}
	for (int i=0; i<size; i++)
	{
		cout << array[i] << "\t"; 
	}
	cout << endl;
	
	if (swap=false)
	{
		operations++; 
		cout << "Done\n"; 
		
	}
files.close(); // close file
cout << "File was successfully written."; 
system("pause"); 
	
}
void copyAra(int copy[], const int array[])
{
	
	for (int i=0; i<size; i++)
	{
		copy[i]=array[i];
		return;
	}
}


