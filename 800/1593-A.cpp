#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;

        ll A = max(0LL, max(b, c) + 1 - a);
        ll B = max(0LL, max(a, c) + 1 - b);
        ll C = max(0LL, max(a, b) + 1 - c);

        cout << A << " " << B << " " << C << endl;
    }

    return 0;
}
