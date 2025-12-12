#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) cnt1++;
        else if (x == 2) cnt2++;
        else if (x == 3) cnt3++;
        else cnt4++;
    }

    int ans = 0;

    ans += cnt4;

    int p = min(cnt1, cnt3);
    ans += p;
    cnt1 -= p;
    cnt3 -= p;

    ans += cnt3;

    ans += cnt2 / 2;
    cnt2 %= 2;

    if (cnt2 == 1) {
        ans++;
        cnt1 -= min(2, cnt1);
    }

    ans += (cnt1 + 3) / 4;

    cout << ans << "\n";
    return 0;
}
