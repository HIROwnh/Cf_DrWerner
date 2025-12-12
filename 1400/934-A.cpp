#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
const int maxn =50;
ll a[maxn+1];
ll b[maxn+1];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    for (int j = 1; j <= m; j++)
    {
        cin>>b[j];
    }
    ll ans =1e18;
    for (int i = 1; i <= n; i++)
    {
        ll maxi=-1e18;
        for (int j = 1; j <= n; j++)
        {
            if(i==j)continue;
            for(int k=1;k<=m; k++){
                //
                ll zarb = a[j] * b[k];
                maxi = max(maxi, zarb);
            }
        }
        ans = min(ans, maxi);
    }
    
    cout<<ans;
    return 0;
}