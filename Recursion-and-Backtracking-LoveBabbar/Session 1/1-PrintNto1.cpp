#include <bits/stdc++.h>
using namespace std;

void PrintNto1(int n)
{
    // Base case
    if (n == 0)
    {
        return;
    }

    // Operation
    cout << n << " ";

    // Recursive relation
    PrintNto1(n - 1);
}

int main()
{
    PrintNto1(5);
    return 0;
}