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
        int n,m,k;
        cin>>n>>m>>k;
        bool flag = true;
        int max = (n+m-1)/m;
        if(max+k>=n)flag = false;
        if(flag)cout<<"YES"<<endl;
        if(!flag)cout<<"NO"<<endl;
    }
    

    return 0;
}