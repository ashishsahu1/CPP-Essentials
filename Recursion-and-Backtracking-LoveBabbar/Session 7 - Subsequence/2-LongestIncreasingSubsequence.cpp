#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void PrintSubsequence(int arr[], vector<int> ans, int i, int n)
{
    if (i == n)
    {
        printVec(ans);
        return;
    }
    else
    {
        // include
        ans.push_back(arr[i]);
        PrintSubsequence(arr, ans, i + 1, n);
        ans.pop_back();

        // exclude
        PrintSubsequence(arr, ans, i + 1, n);
    }
}

void LongestIncreasingSubsequence(int arr[], vector<int> ans, int i, int n, int &lng)
{
    if (i == n)
    {
        int ttn = ans.size();
        lng = max(lng, ttn);
        // printVec(ans);
        return;
    }
    else if (ans[ans.size() - 1] < arr[i])
    {
        // include
        ans.push_back(arr[i]);
        LongestIncreasingSubsequence(arr, ans, i + 1, n, lng);
        ans.pop_back();
    }
    else
    {
        // exclude
        LongestIncreasingSubsequence(arr, ans, i + 1, n, lng);
    }
}

int main()
{

    int arr[] = {0, 1, 0, 3, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans;
    // PrintSubsequence(arr, ans, 0, n);
    int lng = 0;
    LongestIncreasingSubsequence(arr, ans, 0, n, lng);
    cout << lng;
    return 0;
}