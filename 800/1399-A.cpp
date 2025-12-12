#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> data(n);
        for (int i = 0; i < n; i++) {
            cin >> data[i];
        }

        sort(data.begin(), data.end());
        data.erase(unique(data.begin(), data.end()), data.end());

        bool ok = true;
        for (int i = 0; i + 1 < data.size(); i++) { 
            if (abs(data[i] - data[i + 1]) != 1) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
