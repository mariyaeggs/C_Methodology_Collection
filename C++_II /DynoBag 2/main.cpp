#include <iostream>
#include "dynobag.h"

using namespace std;

int main() {
    int size = 5;

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 5, 4, 3, 2};
    dynobag b1;
    dynobag b2;
    dynobag b3;

    // insert into bags
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < arr1[i]; j++) {
            b1.insert(i);
        }
        for (int j = 0; j < arr2[i]; j++) {
            b2.insert(i);
        }
    }
    for (int i = 0; i < size; i++) {
        if (arr1[i] != b1.count(i)) {
            cout << "Values in bag1: " << i << endl;
            cout << "Also "<< b1.count(i) << "over " << arr1[i] << endl;
        }
        if (arr2[i] != b2.count(i)) {
            cout << "Values in bag2: " << i << endl;
            cout << "Also " << b2.count(i) <<"over " << arr2[i] << endl;
        }
    }
    b3 =( b1- b2);
    for(int i = 0; i < size; i++ ) {
        int d = arr1[i] - arr2[i];
        d = (d >= 0) ? d : 0;
        if(b3.count(i) != d) {
            cout << "Values in bag3: " << i << endl;
            cout << "Also "<< b3.count(i) << "over " << d << endl;
        }
    }

    b1 -= b1;
    for (int i = 0; i < size; i++) {
        if (0 != b1.count(i)) {
            cout << "Values of equality: " << i << endl;
        }
    }

    cout << "Zilch!" << endl;
}
