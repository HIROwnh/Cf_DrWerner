#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n;
        cin>>n;
        ll ans = 0;
        ll Data [n];
        for (int i = 0; i < n; i++)
        {
            cin>>Data[i];
            ans += Data[i];
        }
        cout<<ans-2*Data[n-2]<<endl;
    }
       

    return 0;
}