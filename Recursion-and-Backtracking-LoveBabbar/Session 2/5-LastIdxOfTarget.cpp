#include <bits/stdc++.h>
using namespace std;

int findLastIdx(int arr[], int size, int target, int idx)
{
    // Base case
    if (idx == -1)
    {
        return -1;
    }

    // Operation
    if (arr[idx] == target)
    {
        return idx;
    }

    // recursive relation
    return findLastIdx(arr, size, target, idx - 1);
}

int main()
{

    int arr[] = {1, 3, 2, 3, 6, 4, 3};
    int size = sizeof(arr) / sizeof(int);
    int target = 3;
    cout << findLastIdx(arr, size, target, size - 1) << endl;
    return 0;
}