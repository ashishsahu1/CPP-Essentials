#include <bits/stdc++.h>
using namespace std;

int findFirstIdx(int arr[], int size, int target, int idx)
{
    if (idx == size)
        return -1;

    if (arr[idx] == target)
        return idx;

    return findFirstIdx(arr, size, target, idx + 1);
}

void findFirstIdxUsingRef(int arr[], int size, int target, int &count)
{
    if (size == 0 || arr[0] == target)
        return;

    count += 1;

    return findFirstIdxUsingRef(arr + 1, size - 1, target, count);
}

int main()
{

    int arr[] = {1, 3, 2, 3, 6, 4, 3};
    int size = sizeof(arr) / sizeof(int);
    int target = 6;
    cout << findFirstIdx(arr, size, target, 0) << endl;

    // Using ref
    int count = 0;
    findFirstIdxUsingRef(arr, size, target, count);
    if (count == size)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << count << endl;
    }

    return 0;
}