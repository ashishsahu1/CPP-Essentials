#include <bits/stdc++.h>
using namespace std;

void Print(int arr[], int ln, int i)
{
    // Base case
    if (i == ln)
    {
        return;
    }

    // Operations
    cout << arr[i] << " ";

    // Recursive relation
    Print(arr, ln, i + 1);
}

int main()
{
    int ln = 5;
    int arr[ln] = {22, 33, 44, 55, 66};
    Print(arr, ln, 0);
    return 0;
}