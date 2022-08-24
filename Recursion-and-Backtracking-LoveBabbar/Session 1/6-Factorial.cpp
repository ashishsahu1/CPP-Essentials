#include <bits/stdc++.h>
using namespace std;

int Fact(int n)
{
    // Base case
    if (n == 1)
    {
        return 1;
    }

    // Recursive relation
    return n * Fact(n - 1);
}

int main()
{
    cout << Fact(5) << endl;
    return 0;
}