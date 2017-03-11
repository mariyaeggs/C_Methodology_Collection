#include <iostream>
using namespace std;

void selectionSort(int x[], int size) {

   for(int i = 0; i < size; i++)
   {
      int min_index = i;

      for(int j = i + 1; j < size; j++)
      {
         if(x[j] < x[min_index])
            min_index = j;
      }

      if(min_index != i)
      {
         int temp = x[min_index];
         x[min_index] = x[i];
         x[i] = temp;
      }
   }
}
void bubbleSort(int x[], int size) {
   for(int i=0; i<size; i++) {
      for(int j=0; j< (size-i-1); j++) {
         if(x[j] > x[j+1]) {
            int temp = x[j];
            x[j] = x[j+1];
            x[j+1] = temp;
         }
      }
   }
}
void insertionSort(int x[], int size) {
   for(int i=0; i<size; i++) {
      for (int j = i; j >= 1; j--) {
         int temp;

         if (x[j] < x[j - 1]) {
            temp = x[j];
            x[j] = x[j - 1];
            x[j - 1] = temp;
         }
      }
   }
}
void merge(int x[], int l, int m, int r)
{
   int i, j, k;
   int n1 = m - l + 1;
   int n2 =  r - m;

   // Create Temp arrays
   int left_arr[n1], right_arr[n2];

   /* Copy data to temp arrays L[] and R[] */
   for (i = 0; i < n1; i++)
      left_arr[i] = x[l + i];
   for (j = 0; j < n2; j++)
      right_arr[j] = x[m + 1+ j];

   /* Merge the temp arrays back into arr[l..r]*/
   i = 0; // Initial index of first subarray
   j = 0; // Initial index of second subarray
   k = l; // Initial index of merged subarray
   while (i < n1 && j < n2)
   {
      if (left_arr[i] <= right_arr[j])
      {
         x[k] = left_arr[i];
         i++;
      }
      else
      {
         x[k] = right_arr[j];
         j++;
      }
      k++;
   }

   /* Copy the remaining elements of L[], if there
      are any */
   while (i < n1)
   {
      x[k] = left_arr[i];
      i++;
      k++;
   }

   /* Copy the remaining elements of R[], if there
      are any */
   while (j < n2)
   {
      x[k] = right_arr[j];
      j++;
      k++;
   }
}
void merge_sort(int arr[], int leftarr, int rightarr)
{
   if (leftarr < rightarr)
   {
      // Same as (l+r)/2, but avoids overflow for
      // large l and h
      int m = leftarr+(rightarr-leftarr)/2;

      // Sort first and second halves
      merge_sort(arr, leftarr, m);
      merge_sort(arr, m+1, rightarr);

      merge(arr, leftarr, m, rightarr);
   }
}
void printArray(int x[], int size) {
   int i;
   for (i = 0; i < size; i++) {
      printf("%d ", x[i]);
   }
}
int main() {

   // All sort arrays
   int selection_sort_arr[5] = {4, -3, 8, 1, 10};
   int bubble_sort_arr[5] = {4, -3, 8, 1, 10};
   int insertion_sort_arr[7] = {10, 7, 3, 8, 1, 9, 0};
   int merge_sort_arr[9] = {13, 22, 57, 99, 39, 64, 57, 48, 70};

   int radix_sort_arr[5] = {1,2,3,5,4};
   int count_sort_arr[5] = {1,2,3,5,4};

   // Selection Sort
   cout << endl;
   cout << "--------------Selection Sort Number 1--------------";
   cout << "\n" << "Selection sort Question 1 unsorted ";
   printArray(selection_sort_arr, 5);
   selectionSort(selection_sort_arr, 5);
   cout << endl;

   cout << "Selection sort Question 1 sorted ";
   printArray(selection_sort_arr, 5);
   cout << endl;

   // Bubble Sort
   cout << endl;
   cout << "--------------Bubble Sort Number 2--------------";
   cout << "\n" << "Selection sort Question 2 unsorted ";
   printArray(selection_sort_arr, 5);
   bubbleSort(bubble_sort_arr, 5);
   cout << endl;

   cout << "Selection sort Question 2 sorted ";
   printArray(bubble_sort_arr, 5);
   cout << endl;

   // Insertion Sort
   cout << endl;
   cout << "--------------Insertion Sort Number 3--------------";
   cout << "\n" << "Insertion sort Question 3 unsorted ";
   printArray(insertion_sort_arr, 7);
   insertionSort(insertion_sort_arr, 7);
   cout << endl;

   cout << "Insertion sort Question 3 sorted ";
   printArray(insertion_sort_arr, 7);
   cout << endl;

   // Merge Sort
   cout << endl;
   cout << "--------------Merge Sort Number 4--------------";
   cout << "\n" << "Merge sort Question 4 unsorted ";
   printArray(merge_sort_arr, 9);
   merge_sort(merge_sort_arr, 0, 9);
   cout << endl;

   cout << "Counting sort Question 4 sorted ";
   for(int i=0; i<9; i++){
      cout << merge_sort_arr[i] << " ";
   }
   cout << endl;
   
   return 0;
}