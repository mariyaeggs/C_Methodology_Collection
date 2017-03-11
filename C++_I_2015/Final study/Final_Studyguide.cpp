#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h> 
#include <iostream>
#include <iomanip> 
#include <math.h> 

using namespace std; 

//
//public static void swapFirstAndSecondHalf(int[] values) {
//    final int len = values.length / 2;
//    final int offset = values.length - len;
//    for (int i = 0; i < len; i++) {
//        int temp = values[i];
//        values[i] = values[offset + i];
//        values[offset + i] = temp;
//    }
//}

//Searches a partially filled array of nonnegative integers for a target value.

//const int DECLARED_SIZE = 20;
//
//void fill_array(int a[], int size, int& number_used);
//
//int search(const int a[], int number_used, int target);
//
//int main( ) 
//{
//    int arr[DECLARED_SIZE], 
//		list_size, 
//		target, 
//		result;
//    char ans;
//    
//    //user input
//    fill_array(arr, DECLARED_SIZE, list_size);
//
//    do {
//        cout << "Enter a number to search for: ";
//        cin >> target;
//
//        result = search(arr, list_size, target);
//        if (result == -1)
//            cout << target << " is not on the list.\n";
//        else
//            cout << target << " is stored in array position " << result << endl
//                     << "(Remember: The first position is 0.)\n";
//
//        cout << "Search again?(y/n followed by Return): ";
//        cin >> ans;
//    } 
//	while ((ans != 'n') && (ans != 'N'));
//    	{
//    		cout << "Program ended.\n"; 
//    		return 0;
//		}
//	//end of main program
//}
//void fill_array(int a[], int size, int& number_used)
//{
//	int next, 
//		i=0;
//		 
//	cout << "Enter " << size << "nonnegative numbers.\n"
//		<< "End the list with a negative number.\n"; 
//	cin >> next; 
//	
//	while ((next >=0) && (i<size))
//	{
//		a[i]=next; 
//		i++; 
//		cin >> next; 
//		
//		number_used=i; 
//	}
//}
//int search(const int a[], int number_used, int target)
//{
//		const int T=1, 
//				  F=0; 
//				
//		int i=0,
//			located=false; 
//		
//		while ((!located) && (i<number_used))
//		{
//			if (target==a[i])
//			located=true; 
//			else
//			i++; 
//			if (located) // bool
//			return i; 
//			else 
//			return -1; 
//		}
//}
int main()
{

int num=2; 
int counter=0; 
int val=5; 
 
 for (int num = 2; num != 100; num += 2) {
        counter++;
        if (num > pow(val,2))
            break;
    }
}



