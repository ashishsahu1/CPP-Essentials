#include <bits/stdc++.h>
using namespace std;

void Print1toNto1(int n, int m)
{
    // Base case
    if (n == 0)
    {
        return;
    }

    // Operation 1
    cout << m - n + 1 << " ";

    // Recursive relation
    Print1toNto1(n - 1, m);

    // Operation 2
    cout << m - n + 1 << " ";
}

int main()
{
    Print1toNto1(5, 5);
    return 0;
}