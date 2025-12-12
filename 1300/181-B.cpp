#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
const int maxX = 2000;
const int maxN = 3000;
int is[maxX+1][maxX+1];
int x [maxN+1];
int y [maxN+1];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    for (int  i = 1; i <= n; i++)
    {
        cin>>x[i]>>y[i];
        x[i]+=1000;
        y[i]+=1000;
        is[x[i]][y[i]]++;
    }
    ll ans =0;
    for (int i = 1; i <= n; i++)
    {
        for (int j =i+ 1; j <= n; j++)
        {
            int Bx = (x[i]+x[j])/2;
            int By = (y[i]+y[j])/2;
            if((x[i]+x[j])%2==1 or (y[i]+y[j])%2==1){
                continue;
            }
            ans = ans + is[Bx][By];
        }
        
    }
    
    cout<<ans;

    return 0;
}