#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1 || n == 3) {
            cout << -1 << "\n";
            continue;
        }

        vector<vector<char>> dp(n + 1, vector<char>(11, 0));
        vector<vector<char>> nxt(n + 1, vector<char>(11, 0));
        dp[0][0] = 1;

        for (int i = 0; i < n; i++) {
            for (int bal = 0; bal < 11; bal++) if (dp[i][bal]) {
                for (char d : {'3', '6'}) {
                    if (i == n - 1 && d != '6') continue;
                    int val = d - '0';
                    bool oddpos = ((i + 1) % 2 == 1);
                    int nbal = bal;
                    if (oddpos) nbal = (nbal + val) % 11;
                    else nbal = (nbal - val + 11) % 11;
                    if (!dp[i + 1][nbal]) {
                        dp[i + 1][nbal] = 1;
                        nxt[i + 1][nbal] = d;
                    }
                }
            }
        }

        if (!dp[n][0]) {
            cout << -1 << "\n";
            continue;
        }

        string ans(n, '3');
        int cur = 0;
        for (int i = n; i > 0; i--) {
            char d = nxt[i][cur];
            ans[i - 1] = d;
            int val = d - '0';
            bool oddpos = (i % 2 == 1);
            int pbal = cur;
            if (oddpos) pbal = (pbal - val + 11) % 11;
            else pbal = (pbal + val) % 11;
            cur = pbal;
        }

        cout << ans << "\n";
    }
    return 0;
}
