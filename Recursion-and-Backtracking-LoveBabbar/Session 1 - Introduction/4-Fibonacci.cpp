#include <bits/stdc++.h>
using namespace std;

int Fibonacci(int n)
{
    // Base case
    if (n == 0 || n == 1)
    {
        return n;
    }

    // Recursive relation
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
    cout << Fibonacci(7) << endl;
    return 0;
}