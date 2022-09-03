#include <bits/stdc++.h>
using namespace std;

void PrintNto1toN(int n)
{
    // Base case
    if (n == 0)
    {
        return;
    }

    // Operation 1: printing N to 1
    cout << n << " ";

    // Recursive relation
    PrintNto1toN(n - 1);

    // Operation 1: printing 1 to N
    cout << n << " ";
}

int main()
{

    PrintNto1toN(5);
    return 0;
}