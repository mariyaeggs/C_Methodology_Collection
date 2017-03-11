#include <iostream>
#include <iomanip>

using namespace std;

#include "BST.h"
/**
 * Title: Program 7 Submission : Binary Search Tree
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2
 *
 * This is an implementation file for
 * a binary search tree operations program
 * in C++ Programming.
 *
 * @author Mariya Eggensperger
*/


/**
 * Default constructor. Constructs an empty Binary Tree object.
 *
 * @param args no root node
 * @return
*/
BST::BST()
        : myRoot(0)
{}
/**
 * Boolean check if a Binary Tree is empty.
 *
 * @param args True is returned if the BST
 * is empty and false is returned otherwise.
 * @return myRoot == 0
*/
bool BST::empty() const
{ return myRoot == 0; }
/**
 * Recursive denotation for member function
 * searchRecursiveBin().
 *
 * @param args call on self
 * @return return self
*/
bool BST::search(const int & item) const
{
   return searchRecursive(myRoot, item);
}
/**
 * Boolean search recursively
 * for a node in the binary tree.
 *
 * @param args locptr == null return false,
 * recursively searches for specified node
 * @return true if specified node is located
*/
bool BST::searchRecursive(BinNode *locptr, const int &item) const {
   if (locptr == NULL)
      return false;
   if (item < locptr->data)       // Descend left
      return searchRecursive(locptr->left, item);
   else if (locptr->data < item)  // Descend right
      return searchRecursive(locptr->right, item);
   else                           // Item found
      return true;
}
/**
 * Add a node to the binary tree.
 *
 * @param args node is added to the tree,
 * provided there is space. Otherwise, an
 * error message is displayed.
 * @return bool return
*/
void BST::insert(const int & item)
{
   BinNode * locptr = myRoot;   // Search pointer
   BinNode * parent = 0;        // Pointer to parent of current node
   bool found = false;     // Indicates if item already in BST
   while (!found && locptr != 0)
   {
      parent = locptr;
      if (item < locptr->data)       // Descend left
         locptr = locptr->left;
      else if (locptr->data < item)  // Descend right
         locptr = locptr->right;
      else                           // Item found
         found = true;
   }
   if (!found)
   {                                 // Construct node containing item
      locptr = new BinNode(item);
      if (parent == 0)               // Empty tree
         myRoot = locptr;
      else if (item < parent->data )  // Insert to left of parent
         parent->left = locptr;
      else                           // Insert to right of parent
         parent->right = locptr;
   }
   else
      cout << "Item already in the tree\n";
}
/**
 * inOrder traversal algorithm definition
 *
 * @param args the inorder() output  gives nodes
 * in non-decreasing order.
 * @return void
*/
void BST::inOrder(ostream & out) const {
   inOrderBin(out, myRoot);
}
void BST::inOrderBin(ostream &out, BinNode *locptr) const {
   if(empty()) {
      cout << "Binary Tree is empty.";
   }
   else if(locptr != NULL) {
      inOrderBin(out,locptr->left);
      out << locptr->data << " ";
      inOrderBin(out, locptr->right);
   }
}
/**
 * preOrder traversal algorithm definition
 *
 * @param args the preOrder() outcome
 * creates a copy of the tree.
 * @return void
*/
void BST:: preOrder(ostream & out) const {
   preOrderBin(out, myRoot);
}
void BST::preOrderBin(ostream &out, BinNode *locptr) const {
   if(empty()) {
      cout << "Binary tree is empty.";
   }
   else if (locptr != NULL)
   {
      out << locptr->data << " "; // Visit the root node
      preOrderBin(out, locptr->left); // Traverse the left subtree
      preOrderBin(out, locptr->right); // Traverse the right subtree
   }
}
/**
 * countNode method function to count
 * nodes inserted into the binary tree.
 *
 * @param args count quantity of nodes
 * inserted
 * @return int nodes in the binary tree
*/
int BST::countNode() {
   return nodeCountBin(myRoot);
}
int BST::nodeCountBin(BinNode *locptr) {
   if (locptr !=NULL) {
      return nodeCountBin(locptr->left)+nodeCountBin(locptr->right)+1;
   }
   else {
      return 0;
   }
}
