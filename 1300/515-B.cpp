#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
const int maxn = 100;

int girls[maxn + 1];
int boys[maxn + 1];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int b;
    cin >> b;
    for (int i = 0; i < b; i++) {
        int x; 
        cin >> x;
        boys[x] = 1;
    }

    int g;
    cin >> g;
    for (int i = 0; i < g; i++) {
        int x; 
        cin >> x;
        girls[x] = 1;
    }

    int gval = gcd(n, m);
    bool good[105] = {0};

    for (int i = 0; i < n; i++)
        if (boys[i])
            good[i % gval] = 1;

    for (int i = 0; i < m; i++)
        if (girls[i])
            good[i % gval] = 1;

    for (int i = 0; i < gval; i++) {
        if (!good[i]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
const int maxn = 100;

int girls[maxn + 1];
int boys[maxn + 1];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int b;
    cin >> b;
    for (int i = 0; i < b; i++) {
        int x; 
        cin >> x;
        boys[x] = 1;
    }

    int g;
    cin >> g;
    for (int i = 0; i < g; i++) {
        int x; 
        cin >> x;
        girls[x] = 1;
    }

    int gval = gcd(n, m);
    bool good[105] = {0};

    for (int i = 0; i < n; i++)
        if (boys[i])
            good[i % gval] = 1;

    for (int i = 0; i < m; i++)
        if (girls[i])
            good[i % gval] = 1;

    for (int i = 0; i < gval; i++) {
        if (!good[i]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
