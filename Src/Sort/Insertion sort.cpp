#include "Insertion sort.h"
#include <iostream>

using namespace std;

int main()
{
	const int N = 10;
	int a[N] = { 12, 5, 3, 2, 45, 96, 6, 8, 11, 24 };

	// Начало сортировки вставками
	for (int i = 1; i < N; i++) 
	{ 
        int key = a[i]; 
        int j = i - 1; 

        while (j >= 0 && a[j] > key) 
        { 
            a[j + 1] = a[j]; 
            j--; 
        } 

        a[j + 1] = key; // поставим запомненный на его новое место	
    }

    // Конец сортировки

    for (int i = 0; i < N; i++) // Вывод отсортированного массива
    	cout << a[i] << '\t';

    cout << endl;

    return 0;  
}  