#include "Shaker sorting .h"
#include <iostream>

using namespace std;
 
//ф-ция для обмена значений ячеек
void swapEl(int *arr, int i)
{
 int temp = arr[i];
 arr[i] = arr[i - 1];
 arr[i - 1] = temp;
}

//ф-ция "шейкер"-сортировки
void myShakerSort(int *arr, int size)
{
    int leftMark = 1;
    int rightMark = size - 1;

    while (leftMark <= rightMark)
    {
        for (int i = rightMark; i >= leftMark; i--) {
            if (arr[i - 1] > arr[i]) { 
                swapEl(arr, i); 
  } 
 }

    leftMark++;

    for (int i = leftMark; i <= rightMark; i++) { 
        if (arr[i - 1] > arr[i]) { 
            swapEl(arr, i); 
  } 
 }

    rightMark--;

    cout << "\nIteration: " << leftMark - 1 << endl; // view the number of iterations  
 }  
}
 
int main()
{
    setlocale(LC_ALL, "rus");
 
    int size = 0;
    cout << "Размер массива: ";
    cin >> size;
    int *A = new int[size];

    // Populate the array with descending values 
    for (int k = 0; k < size; k++) {
         A[k] = size - k; // запись значений по убыванию 
        cout << A[k]  << " | "; 
    }

    myShakerSort(A, size); // сортировка

    cout << "\nМассив после сортировки:\n"; 

    // Print the sorted array values 
    for (int k = 0; k < size; k++) { 
         cout << A[k] << " | ";  
     }

    cout << endl;  

    return 0;  
}  