#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,x;
        cin>>n>>x;
        vector <int> a(n);
        vector <int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }

        sort(b.begin(), b.end(), greater<int>());

        bool isok = true;
        for (int i = 0; i < n; i++) 
        {
            if(a[i] + b[i] > x){
                isok = false;
                break;
            }
        }

        cout << (isok ? "YES" : "NO") << endl;
    }

    return 0;
}
