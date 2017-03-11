#include <iostream>
#include <iomanip>
#include <cstddef>

using namespace std; 

const double PI=3.14159; 

class circle
{
	private:
		double radius;
		double rad;  
	public:
		circle();
		circle(double radius); // constructor
		~circle(); //destructor
		void setRadius(double radius); 
		double getRadius(); 
		double area(); 
		double perimeter(); // aka circumference
		void showValues(); 

}; // end of class definition
//class implementation 
circle::circle()
{
  double radius; 	
}
circle::circle(double radius)
{
	if (radius<0.0)
	{
		cout << "Invalid radius." << endl;
		cout << "Radius has been set to 0.0"; 
	}
	else
	{
		radius=rad; 
	}
}
circle::~circle()
{
	cout << "A circle object ended." << endl;
}
void circle::setRadius(double rad)
{
	 radius=rad; // rad is a placeholder for double etc.
	 return;  // radius is the property of circle class
}
double circle::getRadius()
{
	return radius;
}
double circle::area()
{
	return (PI*(radius*radius)); // circle area=PI*r^2
}
double circle::perimeter()
{
	return (2*PI*radius);  // cirlce perimeter/circumference=2*PI*r
}
void circle::showValues()
{
	cout << "The circle has: \n"; 
	cout << "Radius: " << radius << endl; // use the circle property radius
	cout << "Area: " << area() << endl; // area() function
	cout << "Perim: " << perimeter() << endl; // perimeter() function
	
	return;
}
//main function
int main()
{
	// call out circle class
	circle completeCircle; 
	
	double circleRad=10.0; // circleRad can be any number
	
//	cout<< "Enter radius of circle: "; 
//	cin >> rad; 
	
	completeCircle.setRadius(circleRad);
	completeCircle.showValues(); // call showValues function to print
	
	system("pause"); 
	return 0; 	
}

