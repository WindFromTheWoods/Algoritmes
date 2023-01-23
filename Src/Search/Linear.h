/*
 * Линейный поиск либо последовательный поиск.
 * За счет того, что поиск проводится путем полного последовательного перебора элементов массива и сравнения его значений с заданным ключом
 * Скорость работы алгоритма достаточно низкая.
 */


#ifndef ALGORITMES_LINEAR_H
#define ALGORITMES_LINEAR_H

// Функция вывода массива на экран
void showArr(int arr[], int arrSize);
// Функция линейного поиска
bool linSearch(const int arr[], int requiredKey, int arrSize);

#endif
