//  CST 370 Spring 2017
//  Program1-Solution
//
//  Created by Feiling Jia on 11/26/16.
//  Copyright © 2016 Feiling Jia. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

#include "LinkedList.h"

int main()
{
    string str;
    int i, j;
    LinkedList strlist;
    
    cout<<"Enter your string: ";
    cin >> str;
    
    if (str.length() == 0) {
        cout << "empty input" << endl;
        return -1;
    };
    
    j = str.length() - 1;
    for (i=j; i >= 0; i--) {
        strlist.insert(str[i], 0);
    }
    
    // cout << "your input string is:  ";
    // strlist.display(cout);
    // cout << endl;
    strlist.substringA2B();
    
    
}
