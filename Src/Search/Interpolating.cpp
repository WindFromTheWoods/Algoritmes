#include <iostream>
#include "Interpolating.h"

using namespace std;

int interpolation_search(const int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    while (low <= high && x >= arr[low] && x <= arr[high]) {
        int mid = low + ((high - low) * (x - arr[low])) / (arr[high] - arr[low]);
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int MyArray[] { 1, 2, 4, 6, 7, 89, 123, 231, 1000, 1235 };
    int WhatFind = 123;
    int result = interpolation_search(MyArray, 10, WhatFind);
    if (result == -1)
        cout << "Sorry. Not found" << endl;
    else
        cout << WhatFind << " founded in element " << result << endl;
    return 0;
}
