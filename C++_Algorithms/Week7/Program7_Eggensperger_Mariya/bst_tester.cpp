// bst_tester.cpp
#include <iostream>
using namespace std;

#include "BST.h"
/**
 * Title: Program 7 Submission : Binary Search Tree
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2
 *
 * This is a driver file the
 * implementation of a a binary
 * search tree operations program
 * in C++ Programming.
 *
 * @author Mariya Eggensperger
*/
int main()
{
   // Testing Constructor and empty()
   BST intBST;            // test the class constructor
   cout << "Constructing empty BST\n";
   cout << "BST " << (intBST.empty() ? "is" : "is not") << " empty\n";

   // Testing insert
   cout << "\nNow insert a bunch of integers into the BST."
           "\nTry items not in the BST and some that are in it:\n";
   int number;
   for (;;)
   {
      cout << "Item to insert (-999 to stop): ";
      cin >> number;
      if (number == -999) break;
      intBST.insert(number);
   }
   cout << "BST " << (intBST.empty() ? "is" : "is not") << " empty\n";

   // Testing search()
   cout << "\n\nTest the search() method by \n"
           "inserting a number to search for."
           "\nTry items not in the BST and some that are in it:\n";
   for (;;)
   {
      cout << "Item to find (-999 to stop): ";
      cin >> number;
      if (number == -999) break;
      cout << (intBST.search(number) ? "Found" : "Not found") << endl;
   }
   cout << "\n--------------------TESTING--------------------";
   cout << endl;
   // Testing inOrder traversal
   cout << "\nTesting inOrder(): ";
   intBST.inOrder(cout);

   // Testing preOrder traversal
   cout << "\nTesting preOrder(): ";
   intBST.preOrder(cout);

   // Testing nodeCount()
   cout << "\nTesting nodeCount = ";
   cout << intBST.countNode();
   cout << endl;

}