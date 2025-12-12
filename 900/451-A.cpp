#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;   
    cin>>n>>m;
    int k = min(n,m);
    if(k%2==0){
        cout<<"Malvika"<<endl;
    }else if(k%2==1){
        cout<<"Akshat"<<endl;
    }
    return 0;
}