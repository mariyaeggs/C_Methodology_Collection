//Mariya Eggensperger
// Date: 3/7/2016
// Dev C++ 5.11
// Week 4: Write a program that defines a Cirlce class. 

#include <iostream>
#include <iomanip>
using namespace std;

#ifndef CIRCLE_H
#define CIRCLE_H
 
class Circle {
	private: 
		//circle
		float radius, circumference, area; 
		const float PI = 3.14159;  
		
	public: 
	Circle() { 
		radius = 0; 
		circumference = 0; 
		area= 0;
		void setRadius(float); 
		float circleArea(); 
		float circleCircumference(); 
		void show();
		
		//checks if circle has equivalencies
		int sameArea(Circle);
}; 

void setRadius(float userRadius) {
	radius = userRadius; 
}
float circleArea(){  
	return (PI*(radius*radius));
}
float circleCircumference(){ 
	return (2*PI*radius); 
	}
};
#endif
int main() {

Circle shape; 

float userRadius;
 
cout << "Input circle radius: "; 
cin >> userRadius; 
cout << endl;

shape.setRadius(userRadius); 

//Print to screen

	cout << "------------Circle Calculations-------------\n" << endl; 
	cout << "Circle Area: " << shape.circleArea() << "\n" << endl;
	cout << "Circle Circumference: " << shape.circleCircumference() << "\n" << endl;

return 0;
}





