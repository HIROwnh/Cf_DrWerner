#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> data(n);
    vector<int> count(n, 0); 
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    int count1 = 0;
    for (int i = 0; i + 1 < n; i++) {
        if (data[i] <= data[i + 1]) {
            count[count1]++;
        } else {
            count1++;
        }
    }
    int z = *max_element(count.begin(), count.end()); 
    cout << z+1 << endl;

    return 0;
}
