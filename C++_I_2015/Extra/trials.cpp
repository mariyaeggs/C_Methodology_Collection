#include<iostream>

#include<fstream>

#include<stdlib.h>

using namespace std;



int main(){

int temp, i;

ifstream myFile;

myFile.open("input.txt");

cout << "Input 24 hour temperatures";

while(myFile >> temp)
{
cout << temp << " ";

if(temp % 3 == 1) temp -= 1;

else if(temp % 3 == 2) temp += 1;

if(temp >= 0){

cout << " |";

for(i = 1; i <= temp; i+=3) cout << "*";

cout << endl;

}

else if(temp < 0){

for(i = 0; i <= abs(temp); i+=3) cout << "*";

cout << "|";

cout << endl;

}

}

}


