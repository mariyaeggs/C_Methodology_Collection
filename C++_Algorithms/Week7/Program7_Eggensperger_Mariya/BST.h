#include <iostream>
using namespace std;
/**
 * Title: Program 7 Submission : Binary Search Tree
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2
 *
 * This is a header file that defines
 * the data for a binary search tree
 * operations program in C++ Programming.
 *
 * @author Mariya Eggensperger
*/
#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

class BST
{
public:
    /***** Function Members *****/
    BST();
    bool empty() const;
    bool search(const int & item) const;
    void insert(const int & item);
    void inOrder(ostream & out) const;
    void preOrder(ostream & out) const;
    int countNode();

private:
    /***** Node class *****/
    class BinNode
    {
    public:
        int data;
        BinNode * left;
        BinNode * right;

        // BinNode constructors
        // Default -- data part is default int value; both links are null.
        BinNode()
                : left(0), right(0)
        {}

        // Explicit Value -- data part contains item; both links are null.
        BinNode(int item)
                : data(item), left(0), right(0)
        {}

    };// end of class BinNode declaration

    /***** Data Members *****/
    BinNode * myRoot;
    bool searchRecursive(BinNode * locptr, const int & item) const;
    void inOrderBin(ostream & out, BinNode * locptr) const;
    void preOrderBin(ostream & out, BinNode * locptr) const;
    int nodeCountBin(BinNode * locptr);

}; // end of class declaration

#endif