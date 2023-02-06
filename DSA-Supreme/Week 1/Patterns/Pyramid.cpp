#include <bits/stdc++.h>
using namespace std;

// *
// **
// ***
// ****
// *****
void PrintPyramid_1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// *****
// ****
// ***
// **
// *
void PrintPyramid_2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// FULL PYRAMID
//     _*
//    _*_*
//   _*_*_*
//  _*_*_*_*
// _*_*_*_*_*
void PrintPyramid_3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
            cout << " ";

        for (int j = 0; j < i + 1; j++)
            cout << " *";

        cout << endl;
    }
}

// ******
// *   *
// *  *
// * *
// **
// *
void PrintPyramid_4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i + j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// * * * * * *
// * *
// *   *
// *     *
// *       *
// *         *
void PrintPyramid_5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == j)
                cout << " *";
            else if (j == 0)
                cout << "*";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

// **********
// ****  ****
// ***    ***
// **      **
// *        *
void PrintPyramid_6(int n){
    int k=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int t=0;t<=k;t++){
            cout<<" ";
        }
        for(int l=0;l<n-i;l++){
            cout<<"*";
        }
        k+=2;
        cout<<endl;
    }
}

    int
    main()
{
    int n;
    cin >> n;
    PrintPyramid_6(n);
    return 0;
}