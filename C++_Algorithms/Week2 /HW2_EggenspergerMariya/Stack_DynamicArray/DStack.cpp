//----- DStack.cpp -----
#include <iostream>
#include <cassert>
#include <new>
using namespace std;

#include "DStack.h"
/**
 * Title: Homework Assignment 2 : Stacks, Dynamic Array
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/15/2017
 *
 * Implementation file for a stacks program which
 * contains two stacks each size 10. When an element
 * is popped from the first stack, it's multiplied by 2
 * and added to the stack. When an element is popped
 * from the second stack, it's multiplied by 3 and
 * added to the first stack.
 *
 * @author Mariya Eggensperger
*/
// Definition for stack constructor
Stack::Stack(int numElements) {
   assert(numElements > 0); // Check stack that stack capacity is positive
   myCapacity = numElements; // 140 allowable elements
   myArray  = new(nothrow) StackElement[myCapacity]; // Allocate array of this capacity
   if(myArray!= 0) { // If memory is allocated for array
      myTop = -1;
   }
   else {
      cerr << "Insufficient memory \n";
      exit(1);
   }
}
// Definition for stack deconstructor
Stack::~Stack() {
   delete [] myArray;
}
/**
 * Copy constructor definition.
 *
 * @param args Original stack is copied and
 * received as const reference parameter.
 * @return A copy of the original stack.
*/
Stack::Stack(const Stack & original):
        myCapacity(original.myCapacity), myTop(original.myTop) {
   // Allocate memory for new array
   myArray = new(nothrow) StackElement[myCapacity]; // Where myCapacity = 140 elements
   if(myArray != 0) {
      // Copy the original array elements
      for(int index=0; index <= myTop; index++) {
         myArray[index] = original.myArray[index];
      }
   }
   else {
      cerr << "Insufficient memory \n";
      exit(1); // Terminate program
   }
}
/**
 * Assignment operator definition.
 *
 * @param args rightHandSide is the side to be assigned,
 * which is received as const reference parameter.
 * @return Current stack becomes a copy of rightHandSide.
 * Const reference is returned.
*/
const Stack & Stack::operator=(const Stack &rightHandSide) {
   if (this != &rightHandSide) { // If not stack=stack
      if(myCapacity != rightHandSide.myCapacity) { // If capacities of both stacks are not equal
         delete [] myArray;
         myCapacity = rightHandSide.myCapacity; // Copy capacities
         myArray = new StackElement[myCapacity];
         if(myArray==0) {
            cerr << "\nInsufficient memory" << endl;
            exit(1);
         }
      }
      myTop = rightHandSide.myTop; // Copy top stack element
      for(int index= 0; index <= myTop; index++) {
         myArray[index] = rightHandSide.myArray[index];
      }
   }
   return *this;
}

/**
 * Boolean check if a stack is empty.
 *
 * @param args True if the stack is empty, false if not.
 * @return Boolean value for size of stack.
*/
bool Stack::is_empty() const {
   return (myTop == -1);
}
/**
 * Adds a value to the top of the stack.
 *
 * @param args Value to be added to stack.
 * @return Value added to stack if there is space;
 * otherwise, error message and termination.
*/
void Stack::push(const StackElement &value) {
   if(myTop < myCapacity - 1) { // If array is not full
      myTop++;
      myArray[myTop] = value; // Store value in myArray[myTop];
   }
   else {
      cerr << "Stack full. Increase stack memory capactiy.\n";
      exit(1); // Terminate program
   }
}
/**
 * Retreive a value from the top of the stack.
 *
 * @param args Stack is not empty.
 * @return Value at the top of the stack is returned,
 * unless stack is empty.
*/
StackElement & Stack::top() const { // Accessor function
   if(!is_empty()) {
      return (myArray[myTop]);
   }
   else {
      cerr << "Stack is empty. Garbage value returned.\n";
      StackElement garbage_val;
      return garbage_val;
   }
}
/**
 * Remove a value to the top of the stack.
 *
 * @param args Stack is not empty.
 * @return Value at the top of the stack
 * is removed, unless stack is emtpy.
*/
int Stack::pop() {
   if(!is_empty()) {
      myTop--;
   }
   else {
      cerr << "Empty stack.\n";
   }
}
/**
 * Display a printed version of the stack to console.
 *
 * @param args Stack object is inserted into out, the ostream should be open.
 * @return void return
*/
void Stack::display(ostream &out) const {
   for(int i = myTop; i >= 0; i--) {
      out << myArray[i] << " ";
   }
}
