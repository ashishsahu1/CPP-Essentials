#include <bits/stdc++.h>
using namespace std;

bool Subsequence(string s, string t, int i, int j)
{
    if (i > s.length())
    {
        return true;
    }
    if (j > t.length() || i >= s.length())
    {
        return false;
    }
    if (s[i] == t[j])
    {
        return Subsequence(s, t, i + 1, j + 1);
    }
    else
    {
        return Subsequence(s, t, i, j + 1);
    }
}

int SubsLen(string s, string t, int i, int j)
{
    if (j >= t.length() || i >= s.length())
    {
        return 0;
    }
    if (s[i] == t[j])
    {
        return 1 + SubsLen(s, t, i + 1, j + 1);
    }
    else
    {
        return SubsLen(s, t, i, j + 1);
    }
}

int main()
{
    string s = "abc";
    string t = "ahbgdc";
    cout << SubsLen(s, t, 0, 0);
    return 0;
}