#include <bits/stdc++.h>
using namespace std;

// A
// A B A
// A B C B A
// A B C D C B A
// A B C D E D C B A
void PrintAlphabet(int n)
{
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < i + 1; j++)
        {
            cout << (char)(65 + j);
        }
        for (int k = j; k >= 0; k--)
        {
            cout << (char)(65 + k);
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    PrintAlphabet(n);
    return 0;
}