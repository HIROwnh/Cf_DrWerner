#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector <int> cnt(26, 0);
        for(auto c : s)cnt[c-'a']++;
        int odd = 0;
        for(auto x : cnt){
            if(x%2==1   ){
                odd++;  
            }
        }
        int remove = n-k;
        int ned  = (remove%2==0?0:1);
        if  (odd<=ned+k){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;   
        }

    }
    return 0;
}