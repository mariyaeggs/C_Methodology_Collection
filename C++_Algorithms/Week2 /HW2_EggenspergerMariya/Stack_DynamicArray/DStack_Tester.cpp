//----- DStack_Tester.cpp -----
#include <iostream>
using namespace std;

#include "DStack.h"
/**
 * Title: Homework Assignment 2 : Stacks, Dynamic Array
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/15/2017
 *
 * Driver file for a stacks program which
 * contains two stacks each size 10. When an element
 * is popped from the first stack, it's multiplied by 2
 * and added to the stack. When an element is popped
 * from the second stack, it's multiplied by 3 and
 * added to the first stack.
 *
 * @author Mariya Eggensperger
*/
void sort_stack_ascending(Stack & s1, Stack & s2);

int main() {

   Stack s;

   Stack s1, s2;
   string temp = "";


      cout << "----------------------- Test: 1, 2, 3, 4, 5 -----------------------";

   //Test HW #1
   //Test insertion of 1, 2, 3, 4, 5
   s1.push(1);
   s1.push(2);
   s1.push(3);
   s1.push(4);
   s1.push(5);


   while(!s1.is_empty()){
      temp += s1.top() * 2;
      s1.pop(); }


      while(!s2.is_empty()) {
         temp+= s2.top()* 3;
         s1.pop();
      }


   //Test HW #1
   //Test insertion of 11, 12, 13, 14, 15
   s2.push(11);
   s2.push(12);

   s2.push(13);
   s2.push(14);
   s2.push(15);


//   s1.push(s1.pop() * 2);
//   s1.pop();
//   s1.display(cout);
//
//   s2.push(s2.pop() * 3);
//   s2.pop();
//   s2.display(cout);



}




//   cout << "\nStack One ";
//   s1.display(cout);
//
//   s2.push(11);
//   cout << "Stack Two ";
//   s2.display(cout);
//   for (int i = 1; i <= 5; i++)
//   {
//      s1.push(i);
//   }
//   cout << endl;
//   for (int i=11; i<=15; i++) {
//      s2.push(i);
//   }
//   s2.push(s1.pop());
//   s1.display(cout);
//   s2.display(cout);
//}
//void sortStack(Stack & stack1, Stack & stack2)
//   {
//      while(!stack1.is_empty())
//      {
//         int tempVal = stack1.top();
//         stack1.pop();
//
//         while(!stack2.is_empty() && tempVal < stack2.top())
//         {
//            stack1.push(stack2.top());
//            stack2.pop();
//         }
//
//         stack2.push(tempVal);
//      }



   // Test HW #2
//   s.push(60); s.push (25); s.push(50); s.pop( ); s.pop( );
//   cout << "\n\n----------------- Number 2 -----------------";
//   cout << endl;
//   print(s);

   // Test HW #3
//   s.push (44); s.push (33); s.push (22);
//   while (!s.is_empty()) {
//      s.pop();
//   }
//   cout << "\n\n----------------- Number 3 -----------------";
//   cout << endl;
//   print(s);

//   // Test #4
//   for (int i = 1; i <= 5; i++)
//      s. push (2*i);
//   cout << "\n\n----------------- Number 4 -----------------";
//   cout << endl;
//   print(s);
   //sort_stack_ascending(s1,s2); // Sort both stacks accordingly

//   cout << "\nEnter stack capacity: ";
//   cin >> capacity;

//   Stack s(capacity); s.push(60); s.push (25); s.push(50); s.pop( ); s.pop( );
//   print(s);

//}

