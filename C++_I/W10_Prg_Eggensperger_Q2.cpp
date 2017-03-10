#include <iostream>
#include <iomanip>
using namespace std;

// function prototypes
void compute_Area(int, int, int, int&);
void compute_Perimeter(int, int, int, int&);

// call variables
int	side_A, 
	side_B, 
	side_C,
	triangle_Area, 
	triangle_Perimeter; 

int main() // main function
{
	
	cout << "Enter side (a, b, c) for triangle area: "; // input sides
 	cin >> side_A >>  side_B >> side_C; 
 	
	// triangle inequality theorem
	if ((side_A+side_B)>side_C && (side_B+side_C)>side_A && ((side_A+side_C)>side_B))
	{
	
	cout << "\nInvalid sides a, b, c.\n"; 
	cout << "\nInput three different sides a, b, c: "; 
	cin >> side_A >> side_B >> side_C; 
	}
  
 // function calls
 compute_Area(side_A, side_B, side_C, triangle_Area);
 compute_Perimeter(side_A, side_B, side_C, triangle_Perimeter);
 
 // area of a triangle cout
 cout << "\n" << "The area of triangle with sides " << side_A << ",";
 cout << side_B << "," << side_C << " is: "; 
 cout << triangle_Area;  
 
 // perimeter of a triangle cout 
 cout << "\n\n" << "The perimeter of triangle with sides " << side_A << ",";
 cout << side_B << "," << side_C << " is: "; 
 cout << triangle_Perimeter;
 return 0;  
}
void compute_Area(int side_A, int side_B, int side_C, int& triangle_Area)  
{
 	
 	triangle_Area=((((side_A)+( side_B)+(side_C))/2));  

	return; 
}
void compute_Perimeter(int side_A, int side_B, int side_C, int& triangle_Perimeter)
{
	triangle_Perimeter=((side_A)+( side_B)+(side_C)); 
	
 	return;  
}







