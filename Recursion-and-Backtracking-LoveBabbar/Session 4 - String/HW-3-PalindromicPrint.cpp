// https://www.geeksforgeeks.org/given-a-string-print-all-possible-palindromic-partition/

#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string st, int p1, int p2)
{
    if (p1 >= p2)
    {
        return true;
    }
    if (st[p1] != st[p2])
    {
        return false;
    }
    return checkPalindrome(st, p1 + 1, p2 - 1);
}

void partition(string st, string parts, int idx)
{
    // Base case
    if (idx == st.length())
    {
        if(checkPalindrome(parts,0,parts.length()-1)){
            cout << parts << endl;
        }
        return;
    }

    // Recursive relation
    // Exclude
    partition(st, parts, idx + 1);

    // Include
    partition(st, parts + st[idx], idx + 1);
}

int main()
{

    string st = "NITIN";
    string parts = "";
    partition(st,parts,0);
    // cout << checkPalindrome("NITINN", 0, 5) << endl;
    return 0;
}