#include <bits/stdc++.h>
using namespace std;

void ReverseSTR(string &str, int p1, int p2)
{
    // Base case
    if (p1 >= p2)
    {
        return;
    }

    // Operation
    char temp = str[p1];
    str[p1] = str[p2];
    str[p2] = temp;

    // Recursive relation
    ReverseSTR(str, p1 + 1, p2 - 1);
}

void ReverseSTR2(string &str, string &ans, int idx)
{
    // Base case
    if (idx == str.length())
    {
        return;
    }

    // Recursive relation
    ReverseSTR2(str, ans, idx + 1);

    // Operation
    ans += str[idx];
}

int main()
{

    string st = "ASHISH";
    ReverseSTR(st, 0, st.length() - 1);
    string ans;
    cout << st << endl;
    ReverseSTR2(st, ans, 0);
    cout << st << " " << ans << endl;

    return 0;
}