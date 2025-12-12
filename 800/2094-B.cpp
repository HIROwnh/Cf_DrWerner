#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int l2 = max(l, -m);
        int r2 = l2 + m;
        cout << l2 << " " << r2 << endl;
    }

    return 0;
}
