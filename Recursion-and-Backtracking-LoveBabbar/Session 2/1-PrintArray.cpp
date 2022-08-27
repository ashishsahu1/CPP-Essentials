#include <bits/stdc++.h>
using namespace std;

void PrintArray(int arr[], int size, int idx)
{
    // Base case
    if (idx == size)
    {
        return;
    }

    // Operation
    cout << arr[idx] << " ";

    // Recursive relation
    PrintArray(arr, size, ++idx);
}

void PrintArray2(int arr[],int size)
{
    if(size == 0){
        return;
    }

    cout<<*arr<<" ";
    PrintArray2(++arr,size-1);
}

int main()
{
    int arr[] = {12, 23, 34, 45, 56};
    int size = sizeof(arr) / sizeof(int);
    // PrintArray(arr, size, 0);
    cout<<endl;
    PrintArray2(arr,size);
    return 0;
}