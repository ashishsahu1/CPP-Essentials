#include <bits/stdc++.h>
using namespace std;

int Fun(int n)
{
    // Base case 1
    if (n < 0)
        return 0;

    // Base case 2
    if (n == 0)
        return 1;

    // Recursive relation
    return Fun(n - 2);
}

int main()
{
    cout << Fun(8);
    return 0;
}