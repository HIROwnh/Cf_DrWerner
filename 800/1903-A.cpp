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
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        if (k == 1) {
            bool sorted = true;
            for (int i = 1; i < n; i++) {
                if (a[i] < a[i-1]) {
                    sorted = false;
                    break;
                }
            }
            cout << (sorted ? "YES" : "NO") << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
