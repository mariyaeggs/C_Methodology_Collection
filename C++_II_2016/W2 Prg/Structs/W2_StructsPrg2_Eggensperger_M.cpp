// Name: Mariya Eggensperger
// Dev: C++ 5.1.1
// Week2 Structs Assignment: P.22, #1
// Answer questions regarding struct Course and struct Student 

#include <iostream> 
using namespace std; 

struct Course 
{
string courseCode;
string days;
string time; 
int numCredits;
};

struct Student
{ 
int age;
Course c[6];
int credits;
float gpa;

};
int main() {
Student students[25]; // Declare a classrom of students Array 25
students[0].c[2].days = "MWF";
students[0].c[2].days[1] = 'T'; // Replace 'W' with 'T'. Arra[1] is the second letter in 'MWF'
cout<<students[0].c[2].days<<endl;
}
