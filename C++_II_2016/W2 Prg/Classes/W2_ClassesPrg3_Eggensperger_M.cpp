// Name: Mariya Eggensperger 
// Dev: C++ 5.1.1
// Week2 Class Assignment p.23, #17
// Create a Road class. The class should have functions
//for obtaining the width of the road and the length of the road

#include <iostream> 
using namespace std; 

// Class Road 
class Road {
	
	//Declare variables
	private: 
	float widthInFeet; // Width of road in feet
	float lengthInMiles; // Length of road in miles 
	
	public: 
	Road() {
	
	// Obtains width and length of road	
	}
	float getWidth() {
		return widthInFeet; 
	}
	void setWidth(float width) {
		widthInFeet = width; 
	}
	float getLength() {
		return lengthInMiles; 
	// Sets user input for length of road
	}
	void setLength(float length) {
		lengthInMiles = length; 
	}
	float getThickness(float thickness) {
		
		float volume = lengthInMiles *widthInFeet *5280 *(0.0833333*thickness);
		return volume;
	} 
};
int main () {
	Road object; 
	
float width,
	length,
	thickness;
	
	cout <<"Width of road in Feet: ";
	cin >> width;
	cout << "\n\n"; 

	cout <<"Length of road in Miles: ";
	cin >> length;
	cout << "\n\n"; 

	cout <<"Thickness of road in Inches: ";
	cin >> thickness;
	cout << "\n\n"; 

	//Test functions
	object.setWidth(width);
	object.setLength(length);
	cout <<"Holy buckets! " << object.getThickness(thickness) << " of cubic feet in asphalt",
	cout << " is needed to pave your road!\n" << endl;
	cout << "That's some Civil feat."<< endl;
	
	return 0; 
}


