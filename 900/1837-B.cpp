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
        int n;
        cin >> n;
        string s;
        cin >> s;

        int max_run = 1, cur = 1;

        for (int i = 1; i < n; i++) {
            if (s[i] == s[i-1]) {
                cur++;
            } else {
                cur = 1;
            }
            max_run = max(max_run, cur);
        }

        cout << max_run + 1 << endl;
    }

    return 0;
}
