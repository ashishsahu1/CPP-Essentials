#include <bits/stdc++.h>
using namespace std;

void Visualize(string str,string ans,int idx){
    cout<<str<<"-"<<ans<<"-"<<idx<<endl;
}

void printSubs(string str, string ans, int idx)
{
    // Visualize(str,ans,idx);
    // Base case
    if (idx == str.length())
    {
        cout << "Subsequence : "<< ans << endl;
        cout<<"returning up"<<endl;
        return;
    }

    // Recursive relation

    // Include case
    cout << "Calling : " << "printSubs("<<str<<","<< ans + str[idx]<<"," <<idx + 1<<")"<<endl;
    printSubs(str, ans + str[idx], idx + 1);
    // Exclude case
    printSubs(str, ans, idx + 1);
}

int main()
{

    string str = "abcd";
    string ans = "";
    printSubs(str, ans, 0);
    return 0;
}