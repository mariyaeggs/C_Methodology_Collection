#include <iostream>
using namespace std;

#include "LinkedList.h"

int main()
{
   // Test the class constructor
   LinkedList intList;
   cout << "Constructing intList\n";

   // Test insert()
   intList.insert(100, 0);
   intList.display(cout);
   cout << endl;

   intList.insert(200, 0);
   intList.display(cout);
   cout << endl;
   
   intList.insert(300, 1);
   intList.display(cout);
   cout << endl;
   
   intList.insert(400, 1);
   intList.display(cout);
   cout << endl;
   
   intList.insert(500, 3);
   intList.display(cout);
   cout << endl;

   // Test destructor
   {
      LinkedList anotherList;
      for (int i = 0; i < 10; i++)
      {
	anotherList.insert(100*i, i);
      }
      cout << "\nThis is another list\n";
      anotherList.display(cout);
   }

   // Test erase
   intList.erase(1);
   intList.erase(1);
   cout << "\n\nTwo items are erased from the first list\n";
   intList.display(cout);
   cout << endl;

   // Test maxItem
   ElementType max1, max2, max3;
   LinkedList emptyList;
   LinkedList oneList;
   LinkedList manyList;
   // Filling test lists
   oneList.insert(232,0);
   for (int i = 0; i < 10; i++)
      {
		manyList.insert(100*i, i);
      }

   cout <<"\n\nTesting maxItem...\n\n";
   cout << "\nThis is the result of maxItem called on a list with no items";
   emptyList.display(cout);
   max1 = emptyList.maxItem();
   cout << "The return value is " << max1<<"\n\n";

   cout << "\nThis is a list with one item \n";
   oneList.display(cout);
   max2 = oneList.maxItem();
   cout << "\nThe maximum value is " << max2 <<"\n\n";

   cout << "\nThis is a list with many items \n";
   manyList.display(cout);
   max3 = manyList.maxItem();
   cout <<"\nThe maximum value is " << max3 <<"\n\n\n";

	// Test isAscendingOrder()
	bool result1, result2, result3, result4;
	LinkedList unorderedList;

	// Filling an unordered list
	unorderedList.insert(7,0);
	unorderedList.insert(12,0);
	unorderedList.insert(-3,0);
	unorderedList.insert(5,0);
	unorderedList.insert(11,0);

	cout <<"Testing isAscendingOrder()...\n\n";
	result1=emptyList.isAscendingOrder();
	cout <<"Result of isAscendingOrder() called on an empty list: "<<result1<<"\n";
	cout <<"\n";

	oneList.display(cout);
	cout << endl;
	result2=oneList.isAscendingOrder();
	cout <<"Result of isAscendingOrder() called on this list (one item): "<<result2<<"\n\n";

	manyList.display(cout);
	cout << endl;
	result3=manyList.isAscendingOrder();
	cout <<"Result of isAscendingOrder() called on this list (many items): "<<result3<<"\n\n";

	unorderedList.display(cout);
	cout << endl;
	result4=unorderedList.isAscendingOrder();
	cout <<"Result of isAscendingOrder() called on this list (many items): "<<result4<<"\n\n";
}