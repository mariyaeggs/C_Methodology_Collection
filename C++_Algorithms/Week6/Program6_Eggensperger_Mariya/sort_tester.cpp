//----- sort_tester.cpp -----
#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

/**
 * Title: Program 6 Submission : Insertion Sort
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2
 *
 * This is a driver program to test the insertion sort
 * CoolSort() function. The program reads a decreasing
 * sequence of numbers that end at 1. For each H, it
 * sorts the sub-arrays that start at arbitrary element(s)
 * and includes every Hth element using insertion sort.
 *
 * @author Mariya Eggensperger
*/

void PrintArray(int x[], int size);
void CoolSort(int x[], int size, int sequence[], int sequence_size);
void Cool(int x[], int size);
int main() {

   // Const array sizes for main array and sequence array
   const int X_ARRA_SIZE_RUN1 = 10;
   const int SEQUENCE_ARRA_SIZE_RUN1 = 3;
   const int X_ARRA_SIZE_RUN2 = 10;
   const int SEQUENCE_ARRA_SIZE_RUN2 = 3;

   // Test Run 1 array
   int H_Run1[X_ARRA_SIZE_RUN1] = {5, 3, 1};
   int sortArr_Run1[X_ARRA_SIZE_RUN1] = {2, 5, 6, 4, 10, 9, 8, 1, 10, 5};

   // Test Run 2
   int H_Run2[X_ARRA_SIZE_RUN2] = {5, 2, 1};
   int sortArr_Run2[X_ARRA_SIZE_RUN2] = {2, 5, 9, 4, 10, 7, 8, 1, 11, 5};


   cout << endl;
   cout << "-------------------Cool cool sort-------------------";
   cout << endl;
   cout << "\n" << "Insertion sort run 1 unsorted ";
   PrintArray(sortArr_Run1, X_ARRA_SIZE_RUN1);
   CoolSort(sortArr_Run1, X_ARRA_SIZE_RUN1,H_Run1,SEQUENCE_ARRA_SIZE_RUN1);
   cout << endl;

   cout << "Insertion sort run 1 sorted ";
   PrintArray(sortArr_Run1, X_ARRA_SIZE_RUN1);
   cout << endl;

   cout << "\n" << "Insertion sort run 2 unsorted ";
   PrintArray(sortArr_Run2, X_ARRA_SIZE_RUN2);
   CoolSort(sortArr_Run2, X_ARRA_SIZE_RUN2,H_Run2,SEQUENCE_ARRA_SIZE_RUN2);
   cout << endl;

   cout << "Insertion sort run 2 sorted ";
   PrintArray(sortArr_Run2, X_ARRA_SIZE_RUN2);
   cout << endl;
}
/*
 * Insertion sort algorithms that reads a decreasing
 * sequence of numbers that end at 1. For each H, it
 * sorts the sub-arrays that start at arbitrary element(s)
 * and includes every Hth element using insertion sort.
 *
 * @param int x[], int sequence[]
 * @return void return
 */
void CoolSort(int x[], int size, int sequence[], int sequence_size) {
   int i, j, key;
   for (int i = 0; i < sequence_size; i++) {
      int step_size = sequence[i];
      for (int i = step_size; i < size; i++) {
         key = x[i];
         j = i;
         while (j >= step_size && x[j-step_size] > key) {
            x[j] = x[j-step_size];
            j -= step_size;
         }
         x[j] = key;
      }
   }
}
/*
 * General function that prints the elements
 * in the selection sort array.
 *
 * @param int x[]
 * @return int x[i]
 */
void PrintArray(int x[], int size) {
   int i;
   for (i = 0; i < size; i++) {
      printf("%d ", x[i]);
   }
}

