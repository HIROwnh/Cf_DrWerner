#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,b,a;   
    cin>>n>>m;
    int cnt=0;
    int z = max(n,m);
    for (int a = 0; a < z+1; a++)
    {
        for (int b = 0; b < z+1; b++)
        {
            if(a*a+b==n&&a+b*b==m) cnt++;
        }
        
    }
    cout<<cnt;
    return 0;
}