#include <bits/stdc++.h>
using namespace std;

void fun(int arr[], bool &dirToRight, int idx, int len)
{
    cout<<dirToRight<<endl;
    if (dirToRight == true)
    {
        if (idx >= len)
        {
            return;
        }
        cout << arr[idx] << " ";
        fun(arr, dirToRight, idx + 2, len);
    }
    else
    {
        if (idx < 0)
        {
            return;
        }
        cout << arr[idx] << " ";

        fun(arr, dirToRight, idx - 2, len);
    }
    cout<<endl;
}

int funn(int n){
    if(n==1){
        return n;
    }
    return 2*(1+n/2-funn(n/2));
}

int main()
{

    int n = 5;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    bool dirToRight = true;
    // fun(arr, dirToRight, n, n);
    cout<<funn(n);
    return 0;
}