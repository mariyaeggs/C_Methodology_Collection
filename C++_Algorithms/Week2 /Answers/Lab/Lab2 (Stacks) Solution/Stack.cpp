/*
|
|  This file implements Stack member functions.
|
\*************************************************************************/

#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;

#include "Stack.h"

// Stack constructor
Stack::Stack() : myTop(-1) {}

// Definition of empty()
bool Stack::empty() const {
    return (myTop == -1);
}

// Definition of push()
void Stack::push(const StackElement & value) {

    if (myTop < STACK_CAPACITY - 1) {
        ++myTop;
        myArray[myTop] = value;
    }
    else {
        cerr << "*** Stack full -- can't add new value ***\n"
             "Must increase value of STACK_CAPACITY in Stack.h\n";
        exit(1);
    }
}

// Definition of display()
void Stack::display(ostream & out) const {
    out << "Stack Contents: " << endl;
    for (int i = myTop; i >= 0; i--)
        out << myArray[i] << endl;
        out << "Stack Count: " << myTop+1 << endl << endl;
}

// Definition of top()
StackElement Stack::top() const {
    if ( !empty() )
        return (myArray[myTop]);
    else {
        cerr << "*** Stack is empty -- returning garbage value ***\n";
        StackElement garbage = 0;
        return garbage;
    }
}

// Definition of pop()
void Stack::pop() {
    if ( !empty() )
        myTop--;
    else
        cerr << "*** Stack is empty -- can't remove a value ***\n";
}

// Get number of pushed elements:
int Stack::getCount() {
    return myTop + 1;
}

// Reverse Stack Elements:
void Stack::reverse() {
   for (int i = myTop; i < myTop/2; i--) {
      swap(myArray[i], myArray[myTop-i]);
   }
}
