//----- Linked_List_Tester.cpp -----
#include <iostream>
#include <sstream>
using namespace std;

#include "LinkedList.h"
/**
 * Title: Lab 1 : Linked List
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/11/2017
 *
 * The tester for a program that asks
 * a user to enter a text string and display
 * the number of substrings that start with A
 * and end with B.
 *
 * @author Mariya Eggensperger, Dr. Feiling Jia
*/

int main() {

   ElementType max_node;
   bool isAscendingOrder;

   // Test the class constructor
   LinkedList intList;


   cout << "\n\nConstructing intList" << endl << endl;

   // Test insert()
   intList.insert(1, 0);
   intList.display(cout);
   cout << endl;

   intList.insert(2, 1);
   intList.display(cout);
   cout << endl;

   intList.insert(2, 2);
   intList.display(cout);
   cout << endl;

   intList.insert(3, 3);
   intList.display(cout);
   cout << endl;

   cout << "\nFinal linked list: " << endl;
   intList.display(cout);
   cout << endl;
   cout << "\nEven mean: " << endl;
   intList.evenMean();
   cout << endl;
   cout << "\nOdd mean" << endl;
   intList.oddMean();
   cout << endl;



//   cout << "******************* TEST maxItem *******************" << endl << endl;
//   cout << endl;
//
//   // Empty list
//   max_node = intList.maxItem();
//   cout << "-------------------- Empty List --------------------";
//   cout << "\n\nMax Item in an empty list: " << max_node << endl << endl;
//
//   // List with one element
//   cout << endl << endl;
//   cout << "-------------------- One in List ------------------";
//   intList.insert(1, 0);
//   cout << "\n\nYour list: ";
//   intList.display(cout);
//   max_node = intList.maxItem();
//   cout << "\n\nMax Item with one in list: " << max_node << endl << endl;
//
//   // List with two elements
//   cout << endl << endl;
//   cout << "-------------------- Two in List ------------------";
//   intList.insert(2, 1);
//   cout << "\n\nYour list: ";
//   intList.display(cout);
//   max_node = intList.maxItem();
//   cout << "\n\nMax Item with two in list: " << max_node << endl << endl;
//
//   // List with many elements
//   cout << endl << endl;
//   cout << "-------------------- Many in List ------------------";
//   intList.insert(3, 2);
//   intList.insert(4, 3);
//   cout << "\n\nYour list: ";
//   intList.display(cout);
//   max_node = intList.maxItem();
//   cout << "\n\nMax Item with one in list: " << max_node << endl << endl;
//
//   cout << "******************* maxItem END *******************" << endl << endl;
//
//   // Clear all linked lists for Ascending tests
//   intList.clear();
//   cout << "Linked list is cleared: ";
//   intList.display(cout);
//   cout << endl;
//
//   cout << endl << endl;
//   cout << "************** TEST isAscendingOrder **************" << endl << endl;
//   cout << endl;
//
//   // Empty list
//   isAscendingOrder = intList.isAscendingOrder();
//   cout << "-------------------- Empty List --------------------";
//
//   cout << "\n\nAscending order in an empty list: ";
//   intList.display(cout);
//   cout << endl;
//   cout << "Is ascending in order: " << ((isAscendingOrder) ? "TRUE." : "FALSE.") << endl << endl;
//   cout << endl;
//
//   // One in List
//   intList.insert(1,0);
//   isAscendingOrder = intList.isAscendingOrder();
//   cout << "-------------------- One in List --------------------";
//
//   cout << "\n\nAscending order in an empty list: ";
//   intList.display(cout);
//   cout << endl;
//   cout << "Is ascending in order: " << ((isAscendingOrder) ? "TRUE." : "FALSE.") << endl << endl;
//   cout << endl;
//
//   // Two in List
//   intList.insert(2,1);
//   isAscendingOrder = intList.isAscendingOrder();
//   cout << "-------------------- Two in List --------------------";
//
//   cout << "\n\nAscending order in an empty list: ";
//   intList.display(cout);
//   cout << endl;
//   cout << "Is ascending in order: " << ((isAscendingOrder) ? "TRUE." : "FALSE.") << endl << endl;
//   cout << endl;
//
//   // Three in List
//   intList.insert(3,2);
//   isAscendingOrder = intList.isAscendingOrder();
//   cout << "-------------------- Three in List --------------------";
//
//   cout << "\n\nAscending order in an empty list: ";
//   intList.display(cout);
//   cout << endl;
//   cout << "Is ascending in order: " << ((isAscendingOrder) ? "TRUE." : "FALSE.") << endl << endl;
//   cout << endl;
//
//   // Four in List
//   intList.insert(4,3);
//   isAscendingOrder = intList.isAscendingOrder();
//   cout << "-------------------- Four in List --------------------";
//
//   cout << "\n\nAscending order in an empty list: ";
//   intList.display(cout);
//   cout << endl;
//   cout << "Is ascending in order: " << ((isAscendingOrder) ? "TRUE." : "FALSE.") << endl << endl;
//   cout << endl;
//
//   // Five in List
//   intList.insert(5,4);
//   isAscendingOrder = intList.isAscendingOrder();
//   cout << "-------------------- Five in List --------------------";
//
//   cout << "\n\nAscending order in an empty list: ";
//   intList.display(cout);
//   cout << endl;
//   cout << "Is ascending in order: " << ((isAscendingOrder) ? "TRUE." : "FALSE.") << endl << endl;
//   cout << endl;
//
//   // Six in List
//   intList.insert(6,5);
//   isAscendingOrder = intList.isAscendingOrder();
//   cout << "-------------------- Six in List --------------------";
//
//   cout << "\n\nAscending order in an empty list: ";
//   intList.display(cout);
//   cout << endl;
//   cout << "Is ascending in order: " << ((isAscendingOrder) ? "TRUE." : "FALSE.") << endl << endl;
//   cout << endl;
//
//   // Seven in List
//   intList.insert(3,4);
//   isAscendingOrder = intList.isAscendingOrder();
//   cout << "-------------------- Seven in List --------------------";
//
//   cout << "\n\nAscending order in an empty list: ";
//   intList.display(cout);
//   cout << endl;
//   cout << "Is ascending in order: " << ((isAscendingOrder) ? "TRUE." : "FALSE.") << endl << endl;
//   cout << endl;
//
//   // Clear all linked lists as reset
//   intList.clear();
//   cout << "Linked list is cleared: ";
//   intList.display(cout);
//   cout << endl;


}