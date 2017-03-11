// Name: Mariya Eggensperger
// Dev: C++ 5.1.1
// Week2 Structs Assignment: P.22, #1
// Answer questions regarding struct Course and struct Student 

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//declare functions  
int getQuality(int); 


struct Course {
	string courseCode; 
	string days; 
	string time; 
	int numCredits; 
};
struct Student {
	int age; 
	Course c[6]; 
	float credits; 
	float gpa;
	string name; 
	float quality;  
};
int main () {
	Course cProgramming; 
	cProgramming.numCredits = 4.0; // Multiplier for second course
	Student Jane; // Declare student Jane
	Jane.name = "Jane"; // Declare student Jane 
	Jane.age = 24; // Set Jane's age to 24
	Jane.credits = 3.4; // Set Jane's GPA to 3.4
	Jane.c[2].time = "11:00 AM";  // Set time of third course to 11 AM
	Jane.c[1] = cProgramming; 
	Jane.quality = getQuality(Jane.c[1].numCredits); // Multiply second course by 4.0
	
	cout << "Name: " << Jane.name << endl;
	cout << "Age: " << Jane.age << endl; 
	cout << "GPA: " << Jane.credits << endl;
	cout << "Class Time: " << Jane.c[2].time << endl; // c[2] equals Jane's 3d class
	cout << "Quality: " << Jane.quality << endl; 
	
		
	return 0; 
}
getQuality(int value) {

	return value*4.0; // Multiply secont course by 4.0 
}
	
