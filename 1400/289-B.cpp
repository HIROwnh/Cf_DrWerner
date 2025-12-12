#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
const int maxn= 100;
int a[maxn*maxn];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,d;
    cin>>n>>m>>d;
    for (int i = 1; i <= n*m; i++)
    {
        cin>>a[i];
    }



    int maxi = 1e9;


    for (int i = 1; i <= n*m; i++)
    {
        int cnt = 0;
        for (int j = 1; j <= n*m; j++)
        {
            int dif = a[i] - a[j];
            if(dif<0)dif=-dif;
            if(dif % d!=0){
                cout<<-1;
                return 0;
            }
        
            cnt += dif/d;
        
        }
        maxi = min(maxi, cnt);
    }
    cout<<maxi;
    return 0;
}