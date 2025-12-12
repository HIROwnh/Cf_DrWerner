#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
int ZeroCount(int x){
    ll m =5;
    int ans =0;
    while (m<=x)
    {
        ans = ans + x/m;
        m = m *5;
    }
    return ans;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin>>q;
    //cout<<ZeroCount(q);
    if(q==0){
        cout<<1;
        return 0;
    }

    int l = 0;
    int r = 5*q;
    while (r-l>1)
    {   
        int mid = (l+r)/2;
        if(ZeroCount(mid)<q){
            l = mid;
        }else{
            r = mid;
        }
    }
    if(ZeroCount(r)==q){
        cout<<r<<endl;
    }else{
        cout<<"NO solution"<<endl;
    }
    return 0;
}