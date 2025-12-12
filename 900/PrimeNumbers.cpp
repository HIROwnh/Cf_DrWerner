#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int start = min(k, n);
    int end = max(k, n);
    
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << '\n';
        }
    }

    return 0;
}
