#include <iostream>
#include <cmath>
using namespace std; 

int main()
{
	int iVal;
	int cubeRoot;
	
	cout << "Enter an integer to compute for cube root:  ";
	cin >> iVal;
	cubeRoot=pow(iVal,3);
	
	cout << "The cube root of the integer is:  " << cubeRoot;
	
	return 0;

}
