#include <bits/stdc++.h>
using namespace std;

void fun(int arr[], int start, int end)
{
    if (start >= end)
    {
        cout << arr[start] << endl;
        return;
    }

    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int mid = start + ((end - start) / 2);
    fun(arr, start, mid);
}

void fun2(int arr[], int start, int mid, int end)
{
    if (start >= end)
    {
        cout << arr[start] << endl;
        return;
    }

    int mid1 = start + ((mid - start) / 2);
    int mid2 = start + ((end - mid) / 2);

    for (int i = start; i <= mid1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " -- ";
    for (int i = mid; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    fun2(arr, start, mid, end);
}

int main()
{
    int arr[] = {3, 4, 1, 5, 6, 2, 7};
    fun(arr, 0, 0, 6);
    return 0;
}