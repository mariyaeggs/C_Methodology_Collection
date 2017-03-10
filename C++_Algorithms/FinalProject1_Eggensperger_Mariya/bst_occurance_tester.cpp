#include <iostream>
#include <regex>
#include <sstream>
using namespace std;

/**
 * Title: Project1 Submission : Take Home Final #1
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2
 *
 * This is a driver program to test occurences of
 * an element via binary search with runtime O log n.
 *
 * @author Mariya Eggensperger
*/

int binary_search(int Arr[],int search_key_A,int k,bool is_found);

int main() {

   int user_input_for_A = 0;
   string temp_str = "";

   bool is_found = false;
   cout << boolalpha;
   // Express patterns to be matched
   // against sequences of characters
   regex integer("-?[[:digit:]]+");

   cout << endl;
   cout << "--------------------Project #1-----------------";
   cout << endl;
   int Arr[] = {1, 1, 2, 2, 5, 5, 5, 5, 5, 5, 5, 8, 8, 9, 10, 11, 11};
   int size_arra_A = sizeof(Arr) / sizeof(Arr[0]);
   int search_key_A;

   cout << "\nEnter the integer to be found: ";
   cin>> search_key_A; // Integer to be found
   int firstindex = binary_search(Arr, size_arra_A, search_key_A, true);
   cout << "\nFirst index occurance for search key "
        << "("<<search_key_A << ")" << " is ";
   printf("[%d]\n", firstindex);

   if (firstindex == -1) {
      printf("\nElement not found.\n ");
   } else {
      int lastindex = binary_search(Arr, size_arra_A, search_key_A, false);
      cout << "\nLast index occurance for search key "
           << "("<<search_key_A << ")" << " is ";
      printf("[%d]\n", lastindex);
      printf("\nTotal occurances = %d\n\n", lastindex - firstindex + 1);
   }
}
/**
 * Function method finds the occurrences of an integer
 * in the array using binary search. Run time is in O log n.
 *
 * @param args int Arr[],int size_arra_A,int k,bool is_found
 * @return integer return
*/
int binary_search(int Arr[],int size_arra_A,int k,bool is_found){
   int no_elem_found=-1;
   int low=0,high=size_arra_A-1;
   while(low<=high){
      int mid=(low+high)/2;
      if(Arr[mid]==k)  {
         no_elem_found=mid;
         if(is_found)
            high=mid-1;
         else
            low=mid+1;
      }
      else if(k<Arr[mid])  high=mid-1;
      else low=mid+1;
   }
   return no_elem_found;
}
