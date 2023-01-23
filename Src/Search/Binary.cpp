#include <clocale>
#include <iostream>
#include "Binary.h"

using namespace std;

int Search_Binary(const int arr[], int left, int right, int key)
{
    while (left <= right)
    {
        int middle = (left + right) / 2;
        if (arr[middle] < key)
            left = middle + 1;
        else if (arr[middle] > key)
            right = middle - 1;
        else
            return middle;
    }
    return -1;
}

int main()
{
    setlocale (LC_ALL, "rus");

    const int SIZE = 12;
    int array[SIZE] = {};
    int key = 0;
    int index = 0; // индекс ячейки с искомым значением

    for (int i = 0; i < SIZE; i++) // заполняем и показываем массив
    {
        array[i] = i + 1;
        cout << array[i] << " | ";
    }

    cout << "\n\nВведите любое число: ";
    cin >> key;

    index = Search_Binary (array, 0, SIZE, key);

    if (index >= 0)
        cout << "Указанное число находится в ячейке с индексом: " << index << "\n\n";
    else
        cout << "В массиве нет такого числа!\n\n";

    return 0;
}
