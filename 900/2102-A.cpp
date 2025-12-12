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
        int p,n,q,m;
        cin>>n>>m>>p>>q;
        if(n%p==0&&((n/p)*q)!=m){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }


    }
    
    return 0;
}