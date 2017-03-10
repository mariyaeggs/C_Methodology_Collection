// Mariya Eggensperger
// CSIS46, Pof. P. Wiese

#include <iostream>
#include "bag.h"
using namespace std;


int main() {

    cout << endl << "Hey there. This is what you have in your bag. " << endl << endl;

    bag first_bag, second_bag, test_bag, compare_bag;

    // First Bag
    first_bag.insert(20);
    first_bag.insert(7);
    first_bag.insert(7);

    first_bag.remove_one(7);
    first_bag.removeAll(7);

    first_bag.insertSeveral(1);

    // Second Bag
    second_bag.insert(11);
    second_bag.insert(12);
    second_bag.insert(13);

    second_bag.remove_one(11);
    second_bag.removeAll(11);

    // Union of bag1 and bag1 = bag3
    second_bag.operator+=(first_bag); // first_bag+second_bag = third_bag

    // Test bag
    test_bag.insert(40);
    test_bag.insert(30);
    // test_bag.insertWithBool(30);

    cout << endl << "First bag values---------" << endl;
    for (int i = 0; i < first_bag.size(); i++) {

        cout << first_bag.getValue(i) << endl << endl;
    }
    cout << "Second bag values----------" << endl;
    cout << "The last value in the output should be a combination of bag1 and bag2" << endl;
    for (int i = 0; i < second_bag.size(); i++) {
        cout << second_bag.getValue(i) << endl << endl;
    }
    cout << "Test bag values----------" << endl;
    for (int i = 0; i < test_bag.size(); i++) {
        cout << test_bag.getValue(i) << endl << endl;
    }
    cout << "Compare bags--------" << endl;
    for (int i=0; (i< first_bag.size() && i<second_bag.size()); i++) {
        if (first_bag.size(), second_bag.size(), first_bag, second_bag) {
            cout << "TRUE" << endl;
        } else {
            cout << "FALSE" << endl;
        }
    }
}