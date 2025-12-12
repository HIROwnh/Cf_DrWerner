#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a,b,c;   
    cin>>n>>a>>b>>c;
    int ans=0;
    for (int i = 0; i <= n/a; i++)
    {
        for (int j = 0; j <= n/b; j++)
        {
            int sum = i*a + j*b;
            if(sum>n){
                continue;
            }
            int dif = n-sum;
            if(dif%c!=0)continue;
            ans =max(ans, i+j+dif/c);
        }
        
    }
    cout<<ans;
    return 0;
}