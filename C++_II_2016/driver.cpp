#include <iostream>
#include "node.h"
#include "linkedList.h"

using namespace std;

int main() {

    // Node
//    Node n1; // Default constructor
//    n1.setData(10);
//    cout << "N1 Data: " << n1.getData() << endl;
//    cout << "N1 Link: "<< n1.getLink() << endl;
//
//    Node n2(4);
//    cout << "N2 Data: "<< n2.getData() << endl;
//    cout << "N2 Link: "<< n2.getLink()<< endl;

    // Linked List
    linkedList myList;

    myList.insert(4);
    cout << myList.showTop() << endl;
    cout << "Values in list: " << myList.length() << endl;
    return 0;
}
