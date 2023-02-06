#include <bits/stdc++.h>
using namespace std;

// *****
// *****
// *****
// *****
// *****
void PrintRectangle_1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// *****
// *   *
// *   *
// *   *
// *****
void PrintRectangle_2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1)
                cout << "*";
            else if (j == 0 || j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    PrintRectangle_2(n);

    return 0;
}