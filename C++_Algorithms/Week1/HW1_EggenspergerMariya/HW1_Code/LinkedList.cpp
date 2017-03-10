//----- LinkedList.cpp -----
#include <iostream>
using namespace std;

#include "LinkedList.h"
/**
 * Title: Lab 1 : Linked List
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/11/2017
 *
 * The implementation for a program that asks
 * a user to enter a text string and display
 * the number of substrings that start with A
 * and end with B.
 *
 * @author Mariya Eggensperger, Dr. Feiling Jia
*/
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
// Definition of clear()
void LinkedList::clear()
{
   Node *pDel = first;

   //Traverse the list and delete the node one by one from the head
   while (pDel != NULL) {
      // Delete head out
      first = first->next;
      delete pDel;
      // Update head
      pDel = first;
   }
   // Point tail to NULL
   tail = first = NULL;
}
// Definition for maxItem()
ElementType LinkedList::maxItem()
{
   Node * ptr = first;
   ElementType max_node;

   if (mySize == 0 || first == 0)
   {
      cerr << "Error. Empty list." << endl;
      return -1; // Display an error message on the screen and return -1 as a max value.
   }
   max_node = ptr->data;
   while(ptr != 0)
   {
      if(ptr->data > max_node)
         max_node = ptr->data;
      ptr = ptr->next;
   }
   return max_node;
}
// Definition for isAscendingOrder
bool LinkedList::isAscendingOrder() {
   if (mySize == 0 || first == 0) {
      return true;
   }
   Node *ptr = first;
   ElementType order = ptr->data;
   while(ptr != 0) {
      if(ptr->data < order) {
         return false;
      }
      order = ptr->data;
      ptr = ptr->next;
   }
   return true;
}
// Definition for the mean in an even length linked list
void LinkedList::evenMean() {
   Node * fastPtr = first;
   Node * slowPtr = first;
   if (first != NULL) {
      while (fastPtr!=NULL && fastPtr->next!=NULL) {
         fastPtr = fastPtr->next->next;
         slowPtr= slowPtr->next;
      }
      cout << slowPtr->data;
   }
}
// Definition for the mean in an odd length linked list
void LinkedList::oddMean() {
   int count = 0;
   Node *middle = first;
   while(first!= NULL){
      if(count%2==1){
         middle= middle->next;

      }
      count++;
      first=first->next;
   }
   if(middle!=NULL){
      cout << middle->data;
   }
}
