#include "Bubble sort.h"
#include <iostream>

using namespace std;

void bubbleSort(int arrForSort[], const int SIZE)
{
    int buff;

    for (int i = 0; i < SIZE - 1; i++) 
    {
        for (int j = SIZE - 1; j > i; j--) 
        {
            if (arrForSort[j] < arrForSort[j - 1]) // compare the current element with the previous one 
            {
                buff = arrForSort[j]; // store the value in a buffer before overwriting it 
                arrForSort[j] = arrForSort[j - 1]; // overwrite the current element with the previous one 
                arrForSort[j - 1] = buff; // assign the stored value to the previous element 
            }  							// no need for an else statement here since nothing happens if the condition is false  						   }  
        }  
    }  
}  


 void printArray(int arr[], const int SIZE) { // create a function to print out an array of any size 

    cout << "Array:\n";

     for (int i = 0; i < SIZE; i++) {

        cout << arr[i] << "\n__\n";

     }

    cout << "\n\n";

 }

 int main() {

     setlocale(LC_ALL, "rus");

     const int SIZE = 5;

     int arr[SIZE];

     for (int i = 0; i < SIZE; i++) { // fill array with values in descending order 

         arr[i] = SIZE - i; 

     }   

     printArray(arr, SIZE); // print out initial array before sorting 

     bubbleSort(arr, SIZE); // pass array to sorting function 

     printArray(arr, SIZE); // print out sorted array after sorting function is called 

 }    