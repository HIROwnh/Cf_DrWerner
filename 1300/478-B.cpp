#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m;
    cin >> n >> m;
    ll t = n / m;
    ll r = n % m;
    ll kmin = r * (t + 1) * t / 2 + (m - r) * t * (t - 1) / 2;
    ll kmax = (n - m + 1) * (n - m) / 2;
    cout << kmin << " " << kmax;
    return 0;
}
