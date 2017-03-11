//rectangle.cpp
//Implementations of functions of Rectangle class 

#include "rectangle.h" 		
void setLength(float userLength) { // sets rectangle length
	length = userLength; 
}
float rectanglePerimeter(){ //calculates rectangle perimeter 
	return (perimeter = 2*(length + width)); 
}
void setWidth(float userWidth) { //sets rectangle width
	width = userWidth; 
}
float rectangleArea(){ //calculates rectangle area
	return (area = (length*width));}
 
};  

