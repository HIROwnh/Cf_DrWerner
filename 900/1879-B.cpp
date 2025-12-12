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
        vector <int> a(n),b(n);
        for(int i =0;i<n;i++)cin>>a[i];
        for(int i =0;i<n;i++)cin>>b[i];
        int mina = *min_element(a.begin(), a.end());
        int suma = accumulate(a.begin(),a.end(), 0LL);
        int minb = *min_element(b.begin(), b.end());
        int sumb = accumulate(b.begin(), b.end(), 0LL);
        int ans = min(mina * n + sumb,minb*n+suma);
        cout<<ans<<endl;
    }
    
    return 0;
}