#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
const int maxn = 3000000;
int a[maxn];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;  
    cin>>n;
    for (int i = 1; i <= n; i++)
    
        cin>>a[i];

    sort(a + 1, a + n + 1);
    ll sum = 0;
    for (size_t i = 1; i <= n; i++)
        {
            sum+= 1LL *(i+1) * a[i];
        }
        sum = sum - a[n];
        cout<<sum;
    
    
    return 0;
}