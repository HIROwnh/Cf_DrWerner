#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n; 
        cin>>n;
        int count21 = n%2020;
        int count20 = (n-count21) / 2020 - count21;
        if(count20>=0&&2020*count20+2021*count21==n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;   
        }

    }
       

    return 0;
}