// Mariya Eggensperger

#include <iostream>
#include "node.h"
#include "node.cpp"

using namespace std;

int main()
{

    struct Node *newHead;
    struct Node *headPtr = new Node;

    initNode(headPtr,1);
    display(headPtr);

    // Inserts nodes into linked list
    insertNode(headPtr,2);
    display(headPtr);

    insertNode(headPtr,3);
    display(headPtr);

    insertNode(headPtr,4);
    display(headPtr);

    insertNode(headPtr,5);
    display(headPtr);

    insertToFront(&headPtr,6);
    display(headPtr);

    // Display deletion of node(s) from linked list
    int numDelete = 6;
    Node *deletePointer = searchNode(headPtr,numDelete);
    if(deleteNode(&headPtr,deletePointer))
    cout << "Node "<< numDelete << " deleted!" << endl;
    display(headPtr);

    // Display reversing of node(s) from linked list
    cout << "List is reversed: "<< endl;
    reverseList(&headPtr);
    display(headPtr);

    // Display copying of node(s) from linked list
    cout << "List is copied: " << endl;
    copyList(headPtr,&newHead);
    display(newHead);

    // Compare lists the first time
    cout << "Are the lists same?" << endl;
    if(compareList(headPtr,newHead))
        cout << "SAME 1st compare"<< endl;
    else
        cout << "DIFFERENT 1st compare" << endl << endl;

    numDelete = 2;
    deletePointer = searchNode(newHead,numDelete);
    if(deleteNode(&newHead,deletePointer)) {
        cout << endl << "Node "<< numDelete << " is erased!"<< endl;
        cout << "New List: " << endl;
        display(newHead);
    }
    // Compare lists again second time
    cout << "Compare again: " << endl << endl;
    cout << "Are lists same?" << endl;
    if(compareList(headPtr,newHead))
        cout << "SAME 2nd compare"<< endl;
    else
        cout << "DIFFERENT 2nd compare"<< endl;

    cout << endl;
    // Delete copied list(s)
    cout << "List previously copied has been deleted\n";
    deleteList(&newHead);
    display(newHead);

    return 0;
}