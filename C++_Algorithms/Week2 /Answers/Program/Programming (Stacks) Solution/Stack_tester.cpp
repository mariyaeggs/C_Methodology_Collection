/* Algorithm
1. Create a second, empty stack (Stack B) to use as a utility in sorting.
2. Create a temporary int variable to store the value of the item currently at the top of the initial stack (Stack A).
3. Set the temporary int variable equal to the value of the item on the top of the initial stack (Stack A).
4. Pop the top value off of the original stack (Stack A).
5. While Stack B isn’t empty, compare the value of the item in the temporary variable with the item on top of Stack B. If the temporary variable is less than the top item, move (push) that top item to Stack A. Repeat until the item on top of Stack B is no longer less than the item in the temporary variable.
6. Push the value in the temporary variable into the Stack B.
7. Repeat steps 5 and 6, above, until Stack A is empty.
8. Return and display the Stack B, which is now sorted with the largest value on top.
 */

/* Abstract: Stack class used as a tool to sort a group of numbers, ascending */
/******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

#include "Stack.h"

//sortStack uses a secondary stack to sort the values in a stack in ascending order.
Stack sortStack(Stack stackA, int numValues)
{
   Stack stackB; //util stack
   int compValue; //to store value while it is compared and then pushed

   while (!stackA.empty())
   {
      compValue = stackA.top(); //set to value of item on top of original stack
      stackA.pop(); 

      //push stackB's top to stackA when value of item in stackB is
      //less than the value that was on top of stackA
      while (!stackB.empty() && compValue < stackB.top())
      {
         stackA.push(stackB.top());
         stackB.pop();
      }
      //push the value from stackA to stackB after comparison completed
      stackB.push(compValue);
   }
   
   return stackB;
}

int main()
{
   Stack intStack; //to receive unsorted integers
   int numValues = 0;

   cout << "***** Demonstration 1 *****\n\n";

   intStack.push(1);
   numValues++;
   intStack.push(5);
   numValues++;
   intStack.push(3);
   numValues++;
   intStack.push(-3);
   numValues++;
   intStack.push(4);
   numValues++;
   intStack.push(8);
   numValues++;
   intStack.push(10);
   numValues++;
   intStack.push(-5);
   numValues++;

   cout << "Starting, unsorted stack:\n";
   intStack.display(cout);
   cout << endl;

   cout << "Final, sorted stack:\n";
   intStack = sortStack(intStack, numValues);
   intStack.display(cout);
   cout << endl;

   //clear stack for demonstration 2
   for (int i = 0; i < numValues; i++)
      intStack.pop();

   cout << "***** Demonstration 2 *****\n\n";
   numValues = 0; //reset for new sorting demonstration

   intStack.push(1);
   numValues++;
   intStack.push(5);
   numValues++;
   intStack.push(-4);
   numValues++;
   intStack.push(6);
   numValues++;
   intStack.push(2);
   numValues++;

   cout << "Starting, unsorted stack:\n";
   intStack.display(cout);
   cout << endl;

   cout << "Final, sorted stack:\n";
   intStack = sortStack(intStack, numValues);
   intStack.display(cout);
   cout << endl;

   //clear stack for demonstration 3
   for (int i = 0; i < numValues; i++)
      intStack.pop();

   cout << "***** Demonstration 3 *****\n\n";
   numValues = 0; //reset for new sorting demonstration

   intStack.push(-1);
   numValues++;
   intStack.push(-4);
   numValues++;
   intStack.push(-4);
   numValues++;
   intStack.push(6);
   numValues++;
   intStack.push(6);
   numValues++;
   intStack.push(9);
   numValues++;

   cout << "Starting, unsorted stack:\n";
   intStack.display(cout);
   cout << endl;

   cout << "Final, sorted stack:\n";
   intStack = sortStack(intStack, numValues);
   intStack.display(cout);
   cout << endl;

   return 0;
}
