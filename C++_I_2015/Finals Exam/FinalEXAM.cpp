

#include <iostream>
using namespace std; 

 

int main(){

    int miles;

    int hours; 

    int i = 1;

    
    cout << "Enter the car speed in miles per hour: ";
	cin >> miles;

	cout << "Enter number of hours traveled: ";
	cin >> hours; 

    while(i != hours){

        cout << "At " << i << " Hours, the car traveled " << miles * i << " miles." << endl;

        i= i+1; 

    }

}

