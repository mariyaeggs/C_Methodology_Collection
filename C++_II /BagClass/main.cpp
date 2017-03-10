#include <iostream>
#include "bag.h"
#include <fstream>

using namespace std;

int main() {

    bag first_bag;
    first_bag.insert(20);
    first_bag.insert(7);
    first_bag.insert(7);
    first_bag.removeOne(7);
    first_bag.removeAll(7);

    for (int i=0; i<b1.size(); i++){
        cout << b1.getValue(i) << endl;
    }


     return 0;
};
