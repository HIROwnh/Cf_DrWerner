#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;   
    while (tc--)
    {
        int n;
        cin>>n;
        if(n==1)cout<<1<<endl;
        else if (n%2){
            cout<<-1<<endl;
        }else{
            vector <int> a(n);
            iota(a.begin(),a.end(),1);
            for (int i = 0; i < n; i+=2)
            {
                swap(a[i],a[i+1]);
            }
            for (auto i :a)
            {
                cout<<i<<' ';
            }
            cout<<endl;
        }
    }
    
    return 0;
}