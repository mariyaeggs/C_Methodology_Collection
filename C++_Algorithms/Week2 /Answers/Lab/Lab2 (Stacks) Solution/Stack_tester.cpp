/*
|
|  This lab consists of 2 parts - the first reverses a stack,
|  the second converts a decimal integer to a binary integer.
|
\*************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
#include <bitset>
#include "Stack.h"

using namespace std;

int main() {
   // Stacks to hold data, misc. variables:
   Stack reversalStack, binaryStack;
   string input1 = ""; string output1 = "";
   int input2 = 0; string output2 = "";

   /**********************************************************************/

   // Part 1 - Reversing a String:
   cout << "\nPlease enter a string to reverse: ";
   getline(cin, input1);
   for(char c : input1)
       reversalStack.push((int)c);

   reversalStack.reverse();

   // We must initialize the condition outside the loop:
   int count1 = reversalStack.getCount();
   for(int i = 0; i < count1; i++) {
       output1 += (char)reversalStack.top();
       reversalStack.pop();
   }

   cout << "The reversed version of the string you entered is: " << output1;
   cout << endl << endl;

   /**********************************************************************/

   // Part 2 - Converting a decimal integer to binary:
   cout << "Please enter a decimal integer to convert to binary: ";
   cin >> input2;
   string binary = bitset<16>(input2).to_string();
   reverse(binary.begin(), binary.end());
   for(char d : binary) {
      binaryStack.push((int)d);
   }
   // We must initialize the condition outside the loop:
   int count2 = binaryStack.getCount();
   for(int i = 0; i < count2; i++) {
       output2 += (char)binaryStack.top();
       binaryStack.pop();
   }

   cout << "The binary version of that number is: " << output2;
   cout << endl << endl << endl;

   /**********************************************************************/

   // Needed so user can see output:
   system("PAUSE");
}



