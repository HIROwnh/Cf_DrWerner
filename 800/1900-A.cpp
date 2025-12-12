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
        int n;
        string s;
        cin >> n >> s;

        bool possible = false;
        int cnt = 0;

        for (int i = 0; i < n; ++i) {
            if (s[i] == '.') {
                int len = 0;
                while (i < n && s[i] == '.') {
                    ++len;
                    ++i;
                }
                if (len >= 3) {
                    possible = true;
                }
                cnt += len;
            }
        }

        if (possible) {
            cout << 2 << endl;
        } else {
            cout << cnt << endl;
        }
    }

    return 0;
}
