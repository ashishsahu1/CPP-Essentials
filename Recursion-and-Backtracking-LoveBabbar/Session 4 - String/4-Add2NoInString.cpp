#include <bits/stdc++.h>
using namespace std;

void Add(string a, string b, int idx, int carry)
{
    if (idx == -1)
    {
        return;
    }

    int ans;
    if (b[idx] == ' ')
    {
        ans = (a[idx] - '0') + ('0' - '0') + carry;
    }
    else if (a[idx] == ' ')
    {
        ans = ('0' - '0') + (b[idx] - '0') + carry;
    }
    else
    {
        ans = (a[idx] - '0') + (b[idx] - '0') + carry;
    }

    carry = 0;
    if (ans > 9 && idx != 0)
    {
        carry = ans / 10;
        ans = ans % 10;
    }
    Add(a, b, idx - 1, carry);
    cout << ans;
}

int main()
{
    string a = "5896";
    string b = "290";
    // 123+234 = 357
    // 129+239 = 368
    int carry = 0;
    int idx = max(a.length() - 1, b.length() - 1);
    Add(a, b, idx, carry);
    return 0;
}