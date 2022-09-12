#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[], int start, int mid, int end)
{
    int len1 = (mid - start) + 1;
    int len2 = (end - mid) + 1;

    int a[len1], b[len2];
    int idx = 0;
    for (int i = start; i <= mid; i++)
    {
        a[idx] = arr[i];
        idx++;
    }

    idx = 0;
    for (int i = mid; i <= end; i++)
    {
        a[idx] = arr[i];
        idx++;
    }

    int len3 = (end - start)+1;
    int final[len3];
    int p1, p2;
}

void MergeSort(int arr[], int start, int end)
{
    // Base case
    if (start >= end)
    {
        return;
    }

    // Mid calc
    int mid = start + ((end - start) / 2);
    MergeSort(arr, start, mid);

    MergeSort(arr, mid + 1, end);

    Merge(arr, start, mid, end);
}

int main()
{
    int arr[] = {3, 4, 1, 5, 6, 2, 7};
    MergeSort(arr, 0, 6);
    return 0;
}