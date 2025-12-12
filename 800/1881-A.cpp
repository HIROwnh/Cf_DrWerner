#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

std::string repeat(const std::string& s, int n) {
    std::string result;
    result.reserve(s.size() * n);
    for (int i = 0; i < n; i++)
        result += s;
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        bool ok = false;
        for (int i = 0; i < 6; i++) {
            if (x.find(s) != string::npos) {
                cout << i << endl;
                ok = true;
                break;
            }
            x = x + x;
        }
        if (!ok) cout << -1 << endl;
    }

    return 0;
}
