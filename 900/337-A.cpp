#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> data(m);
    for (int i = 0; i < m; i++)
        cin >> data[i];

    sort(data.begin(), data.end());

    int ans = INT_MAX;
    for (int i = 0; i + n <= m; i++)
        ans = min(ans, data[i + n - 1] - data[i]);

    cout << ans;
    return 0;
}
