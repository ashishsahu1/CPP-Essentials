#include <bits/stdc++.h>
using namespace std;

void Print1toN(int n)
{
    // Base case
    if (n == 0)
    {
        return;
    }

    // Recursive relation
    Print1toN(n - 1);

    // Operation
    cout << n << " ";
}

int main()
{
    Print1toN(5);
    return 0;
}