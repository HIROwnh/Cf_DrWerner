#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
#define endl '\n'
int removeSecondLast(int n) {
    int last = n % 10;        
    n /= 10;                  
    n /= 10;                  
    return n * 10 + last;   
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;   
    cin>>n;
    if(n>0){
        cout<<n<<endl;
    }else{
        int x = to_string(abs(n)).length();
        if(x==1){
            cout<<0<<endl;
        }else{
            int k = max(n/10, removeSecondLast(n));
            cout<<k<<endl;
        }
    }
    return 0;
}