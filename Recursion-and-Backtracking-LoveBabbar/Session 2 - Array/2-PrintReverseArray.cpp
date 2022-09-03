#include <bits/stdc++.h>
using namespace std;

void PrintReverseArray(int arr[], int size, int index)
{
    // Base case
    if (index == size)
    {
        return;
    }

    // recursive relation
    PrintReverseArray(arr, size, index + 1);

    // operation
    cout << arr[index] << " ";
}

// optimized method as less parameter + tail recursion
void PrintReverseArrayUsingLastIndex(int arr[], int lstIdx)
{
    // Base case
    if (lstIdx == -1)
    {
        return;
    }

    // operation
    cout << arr[lstIdx] << " ";

    // recursive relation
    PrintReverseArrayUsingLastIndex(arr, lstIdx - 1);
}

int main()
{

    int arr[] = {12, 23, 34, 45, 56};
    int size = sizeof(arr) / sizeof(int);
    PrintReverseArrayUsingLastIndex(arr, size - 1);
    return 0;
}