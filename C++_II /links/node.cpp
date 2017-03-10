//
// Created by Mariya Eggensperger on 8/17/16.
//

#include <iostream>
using namespace std;

// First node
void initNode(struct Node *headPtr,int n){
    headPtr->data = n;
    headPtr->next =NULL;
}
// Insert more nodes into the list
void insertNode(struct Node *headPtr, int n) {
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = NULL;

    Node *cur = headPtr;
    while(cur) {
        if(cur->next == NULL) {
            cur->next = newNode;
            return;
        }
        cur = cur->next;
    }
}
// Insert a node to the front of the list
void insertToFront(struct Node **headPtr, int n) {
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = *headPtr;
    *headPtr = newNode;
}
// Searches list and finds specific node
struct Node *searchNode(struct Node *headPtr, int n) {
    Node *current = headPtr;
    while (current) {
        if (current->data == n) return current;
        current = current->next;
    }
    cout << "No " << n << " in your list found.\n";
}
// Deletes one node
bool deleteNode(struct Node **headPtr, Node *deletePointer) {
    Node *current = *headPtr;
    if(deletePointer == *headPtr) {
        *headPtr = current->next;
        delete deletePointer;
        return true;
    }

    while(current) {
        if(current->next == deletePointer) {
            current->next = deletePointer->next;
            delete deletePointer;
            return true;
        }
        current = current->next;
    }
    return false;
}
// Reverses linked list
struct Node* reverseList(struct Node** headPtr)
{
    Node *parent = *headPtr;
    Node *theNode = parent->next;
    Node *child = theNode->next;

    parent->next = NULL;
    while(child) {
        theNode->next = parent;
        parent = theNode;
        theNode = child;
        child = child->next;
    }
    theNode->next = parent;
    *headPtr = theNode;
    return *headPtr;
}
// Copies current linked list
void copyList(struct Node *node, struct Node **newPointer)
{
    if(node != NULL) {
        *newPointer = new Node;
        (*newPointer)->data = node->data;
        (*newPointer)->next = NULL;
        copyList(node->next, &((*newPointer)->next));
    }
}
// Compares lists
int compareList(struct Node *n1, struct Node *n2)
{
    static int flag;
    // If both lists are empty
    if(n1 == NULL && n2 == NULL) {
        flag = 1;
    }
    else {
        if(n1 == NULL || n2 == NULL)
            flag = 0;
        else if(n1->data != n2->data)
            flag = 0;
        else
            compareList(n1->next, n2->next);
    }

    return flag;
}
// Deletes list
void deleteList(struct Node **node)
{
    struct Node *tempNode;
    while(*node) {
        tempNode = *node;
        *node = tempNode->next;
        delete tempNode;
    }
}
// Displays items of list and the dynamic changes as they occur
void display(struct Node *headPtr) {
    Node *linkedList = headPtr;
    while(linkedList) {
        cout << linkedList->data << " ";
        linkedList = linkedList->next;
    }
    cout << endl << endl;
}
