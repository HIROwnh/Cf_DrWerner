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
        int n, q;
        cin >> n >> q;

        vector<int> var(n);
        for (int i = 0; i < n; i++) cin >> var[i];

        vector<int> pref(n + 1, 0);
        for (int i = 0; i < n; i++)
            pref[i + 1] = pref[i] + (var[i] % 2);

        int global_parity = pref[n] % 2; 
        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            l--; r--;

            int length = r - l + 1;

            int odd_in_range = pref[r + 1] - pref[l];
            int old_parity = odd_in_range % 2;

            int new_parity = ((k % 2) * (length % 2));

            int final_parity = global_parity - old_parity + new_parity;

            if (final_parity % 2 != 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
