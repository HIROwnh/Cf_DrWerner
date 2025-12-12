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
        ll n;
        cin>>n;
        vector <ll> data (n);
        for (ll i = 0; i < n; i++)
        {
            cin>>data[i];
        }
        sort(data.begin(), data.end());
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += data[i]-data[0];
        }
        cout<<sum<<endl;
    }
       

    return 0;
}









