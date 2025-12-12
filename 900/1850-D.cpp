#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> data(n);
        
        for (int i = 0; i < n; i++) {
            cin >> data[i];
        }

        sort(data.begin(), data.end());

        int left_len = 1;
        int max_left = 1;
        for (int i = 1; i < n; i++) {
            if (data[i] - data[i - 1] <= k) {
                left_len++;
            } else {
                max_left = max(max_left, left_len);
                left_len = 1;
            }
        }
        max_left = max(max_left, left_len);

        int right_len = 1;
        int max_right = 1;
        for (int i = n - 2; i >= 0; i--) {
            if (data[i + 1] - data[i] <= k) {
                right_len++;
            } else {
                max_right = max(max_right, right_len);
                right_len = 1;
            }
        }
        max_right = max(max_right, right_len);

        cout << n - min(max_left, max_right) << endl;
    }

    return 0;
}
