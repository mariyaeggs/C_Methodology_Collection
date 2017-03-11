#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//Call functions
void fillArrays(); 
bool arrayIsEqualToArray();
void printBothArrays(); 


void fillArrays(int array[], int size){ // funtion fills arr1 && arr2
    
	int i;
  
    cout <<"Enter ten integers for the array:\n"; {
    	for(i=0;i<size;i++) { // where size = 10
    	cin >> array[i]; // array
		}
	}
}
bool arrayIsEqualToArray(int arrayOne[], int arrayTwo[], int size){ //returns a true or false value
    
	int i;
	bool arraysAreEqual;  
    
    for(i=0;i<size;i++) { // where size = 10
    	if(arrayOne[i]!=arrayTwo[i]){ // if arr1 is not equal to arr2
    		 return false; 
		}
	}
    return true;
}

void printBothArrays(int arrayOne[], int arrayTwo[], int size){
    int i;
  	
	cout <<"\nArray1:\n";
    for(i=0;i<size;i++){
    	cout << arrayOne[i] << "\n";
	} 
    printf("\nArray2:\n");
    for(i=0;i<size;i++){
    	cout << arrayTwo[i] << "\n";
	}
}
int main(){ // main function
  
    int i=0;
    int arrayOne[10], arrayTwo[10];
  
    fillArrays(arrayOne, 10); 
    fillArrays(arrayTwo, 10);
  
    if(arrayIsEqualToArray(arrayOne, arrayTwo, 10)) {
    	cout <<"\n----------The arrays are identical----------\n";
	} else{
		cout << "\n----------The arrays are unidentical----------\n";
	} 
	printBothArrays(arrayOne, arrayTwo, 10); //call on the printBothArrays function to print arrays
  
    return 0;
}





