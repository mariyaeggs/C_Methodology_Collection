
#include <iostream>
#include <fstream> // files
//#include <string> // string
//#include <cstdlib>
//#include <string> // string
//#include <ctime>


using namespace std;

int main() 
{
	// declare variables
//	const int size=365; // maximum 365 elements
//	int array[size]; 
//	int randomNum=array[0];
//	int i; 
	
	fstream file; 
	file.open("temp.txt", ios::out); // make a file 
	
	//file_.open("temp.txt"); 
	
	file << "this is text in my file"; 
	file.close(); 
//	for (int i=0; i<size; i++)
//		{
//			// declare variables
//			srand((unsigned)time(0)); // seed random number 
//	
//			if (array[i]>=45 && array[i]<=90) // random number between 45 and 90
//			{
//			 array[i]=(rand() % 365 )+1; 
//			 randomNum++;
//			 //file << array[i] << endl;
//			 file_<< randomNum; 
//			}
//	}
	cout << "File was successfully written."; 
	system("pause"); 
	return 0; 
}
	

