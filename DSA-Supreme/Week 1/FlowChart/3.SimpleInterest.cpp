#include<bits/stdc++.h>
using namespace std;

float calc(int p,int r,int t){
    return (p*r*t)/100;
}

int main(){

    int p,r,t;
    cin>>p>>r>>t;
    cout<<calc(p,r,t);   
    return 0;
}