#include<bits/stdc++.h>
using namespace std;

// 12345
// 1234
// 123
// 12
// 1
void PrintNumbers_1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}

int main(){

    int n;
    cin>>n;
    PrintNumbers_1(n);
    return 0;
}