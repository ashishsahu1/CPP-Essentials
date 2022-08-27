#include <bits/stdc++.h>
using namespace std;

// Method 1
int getMax(int arr[], int size, int idx, int mxIdx)
{
    // Base case
    if (idx == size)
    {
        return arr[mxIdx];
    }

    // Operation
    if (arr[mxIdx] < arr[idx])
    {
        mxIdx = idx;
    }

    // recursion relation
    getMax(arr, size, idx + 1, mxIdx);
}

// Method 2
int getMax2(int arr[], int size)
{
    // Base case
    if (size == 1)
    {
        return arr[0];
    }

    // Operation
    int myMx = arr[size - 1];
    int recursionMax = getMax2(arr, size - 1);

    // recursion relation
    return max(myMx, recursionMax);
}

int main()
{
    int arr[] = {23, 12, 34, 45, 43};
    int size = sizeof(arr) / sizeof(int);
    cout << getMax(arr, size, 0, 0) << endl;
    cout << getMax2(arr, size) << endl;
    return 0;
}