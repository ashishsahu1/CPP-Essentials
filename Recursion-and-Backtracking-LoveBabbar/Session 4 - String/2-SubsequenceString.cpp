#include <bits/stdc++.h>
using namespace std;

void printSubs(string str, string ans, int idx)
{
    // cout << str << " " << ans << endl;
    // Base case
    if (idx == str.length())
    {
        cout << ans << endl;
        return;
    }

    // Recursive relation
    
    // Include case
    printSubs(str, ans + str[idx], idx + 1);
    // Exclude case
    printSubs(str, ans, idx + 1);

    
}

int main()
{

    string str = "abc";
    string ans = "";
    printSubs(str, ans, 0);
    return 0;
}