#ifndef ALGORITMES_SHAKER_SORTING_H
#define ALGORITMES_SHAKER_SORTING_H

Parameters: 
    int *arr - a pointer to an array of integers
    int i - an integer representing an index in the array
Description: 
    This function swaps the element at index i with the element at index i+1 in the array.
void swapEl(int *arr, int i);

Parameters: 
    int *arr - a pointer to an array of integers
    int size - an integer representing the size of the array
Description: 
    This function implements a shaker sort algorithm on the given array. It works by repeatedly looping through the array and calling swapEl() to swap elements that are out of order. It then reverses direction and repeats until no more swaps are needed.
void myShakerSort(int *arr, int size);

#endif //ALGORITMES_SHAKER_SORTING_H
