#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
#define endl '\n'

int luckiness(int x) {
    int mn = 9, mx = 0;
    while (x > 0) {
        int d = x % 10;
        if (d < mn) mn = d;
        if (d > mx) mx = d;
        x /= 10;
    }
    return mx - mn;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int l, r;
        cin >> l >> r;

        int best = l, bestL = -1;
        int R = min(r, l + 100);

        for (int x = l; x <= R; x++) {
            int L = luckiness(x);
            if (L > bestL) {
                bestL = L;
                best = x;
            }
            if (L == 9) break;
        }

        cout << best << endl;
    }

    return 0;
}
