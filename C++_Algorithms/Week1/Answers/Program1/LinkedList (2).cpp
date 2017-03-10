#include <iostream>
using namespace std;

#include "LinkedList.h"

//-- Default constructor
LinkedList::LinkedList()
{ 
	mySize = 0;
	first = NULL;
}

//-- Definition of the copy constructor
LinkedList::LinkedList(const LinkedList & origList)
{
	mySize = origList.mySize;
	first = NULL;
	
	if (mySize == 0) 
		return;

	Node * origPtr, * lastPtr;
	first = new Node(origList.first->data); // copy first node
	lastPtr = first;
	origPtr = origList.first->next;
	while (origPtr != NULL)
	{
		lastPtr->next = new Node(origPtr->data);
		origPtr = origPtr->next;
		lastPtr = lastPtr->next;
	}
}


//-- Definition of the destructor
LinkedList::~LinkedList()
{
	Node * prev = first;
	Node * ptr;

	while (prev != NULL)
	{
		ptr = prev->next;
		delete prev;
		prev = ptr;
	}
}


//-- Definition of insert()
void LinkedList::insert(ElementType dataVal, int index)
{
	if (index < 0 || index > mySize)
	{
		cerr << "Illegal location to insert -- " << index << endl;
		return;
	}

	mySize++;
	Node * newPtr = new Node(dataVal);
	Node * predPtr = first;
	if (index == 0)
	{
		newPtr->next = first;
		first = newPtr;
	}
	else
	{
		for(int i = 1; i < index; i++)
			predPtr = predPtr->next;
		newPtr->next = predPtr->next;
		predPtr->next = newPtr;
	}
}


//-- Definition of erase()
void LinkedList::erase(int index)
{
	if (index < 0 || index >= mySize)
	{
		cerr << "Illegal location to delete -- " << index << endl;
		return;
	}

	mySize--;
	Node * ptr;
	Node * predPtr = first;
	if (index == 0)
	{
		ptr = first;
		first = ptr->next;
		delete ptr;
	}
	else
	{
		for(int i = 1; i < index; i++)
			predPtr = predPtr->next;
		ptr = predPtr->next;
		predPtr->next = ptr->next;
		delete ptr;
	}
}

// -- new function for Programming Assignment #1: print out all the
//  substrings in a linked list that starts with "A" and end with "B"

void LinkedList::substringA2B()
{
    Node * ptr = first;
    Node * IndexA;  // pointers of 'A'
    Node * IndexB;
    int Num = 0;
    
    while (ptr != 0) { // main loop
        if (ptr->data != 'A') { // single quote for char
                                // (double quote is for string)
        ptr = ptr-> next;
        continue; // go to the begining of the "while" loop
        }
    
        // starting 'A' is found
        IndexA = ptr;
        ptr = ptr->next;
        
    // searching for 'B'
        while (ptr !=0 ) {
            if (ptr->data != 'B') {
                ptr = ptr->next;
                continue;
            }
    
        // a substring ending 'B' is found. Print it out
            IndexB = IndexA;
            Num++;
            cout << "Substring " << Num << ": ";
            while (IndexB != ptr) {
                cout << IndexB->data;
                IndexB = IndexB->next;
            }
            cout << 'B' << endl;
            ptr = ptr->next;
        
        }
        ptr = IndexA->next; // starting from the next char after 'A'
        
    } // end of main while loop
    
    cout << "Total " << Num << " substrings" << endl;
}

//-- Definition of display()
void LinkedList::display(ostream & out) const
{
	Node * ptr = first;
	while (ptr != 0)
	{
		out << ptr->data << " ";
		ptr = ptr->next;
	}
}
