#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

bool can(int m, int s) {
    return s >= 0 && s <= 9 * m;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, s;
    cin >> m >> s;

    if (s == 0) {
        if (m == 1) cout << "0 0";
        else cout << "-1 -1";
        return 0;
    }

    if (!can(m, s)) {
        cout << "-1 -1";
        return 0;
    }

    int sum = s;
    string minn;
    for (int i = 0; i < m; i++) {
        for (int d = 0; d < 10; d++) {
            if ((i > 0 || d > 0 || (m == 1 && d == 0)) && can(m - i - 1, sum - d)) {
                minn += char('0' + d);
                sum -= d;
                break;
            }
        }
    }

    sum = s;
    string maxn;
    for (int i = 0; i < m; i++) {
        int d = min(9, sum);
        maxn += char('0' + d);
        sum -= d;
    }

    cout << minn << " " << maxn;

    return 0;
}
