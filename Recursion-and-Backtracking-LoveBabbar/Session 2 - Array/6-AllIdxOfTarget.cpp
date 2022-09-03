#include <bits/stdc++.h>
using namespace std;

void findAllIdx(int arr[], int target, int idx, vector<int> &allIdx)
{
    // Base case
    if (idx == -1)
    {
        return;
    }

    // Operation
    if (arr[idx] == target)
    {
        allIdx.push_back(idx);
    }

    // recursive relation
    return findAllIdx(arr, target, idx - 1, allIdx);
}

int main()
{

    int arr[] = {1, 3, 2, 3, 6, 4, 3};
    int size = sizeof(arr) / sizeof(int);
    int target = 3;
    vector<int> allIdx;
    findAllIdx(arr, target, size - 1, allIdx);

    sort(allIdx.begin(), allIdx.end());
    for (int i = 0; i < allIdx.size(); i++)
    {
        cout << allIdx[i] << " ";
    }
    return 0;
}