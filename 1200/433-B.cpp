#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
const int maxn = 1e5+100;
int a[maxn];
int b[maxn];
ll psa[maxn];
ll psb[maxn];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n;  
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
        b[i]= a[i];

    }
    sort(b+1, b+n+1);


    psa[0]=0;
    for (int i = 1; i <= n; i++)
    {
        psa[i]=psa[i-1] + a[i];

    }
    psb[0]=0;

    for (int i = 1; i <= n; i++)
    {
        psb[i] = psb[i-1] + b[i];
    }
    cin>>m;
    for (int i = 1; i <= m; i++)
    {
        int type;
        cin>>type;
        if(type==1){
            int L,R;
            cin>>L>>R;

            cout<<psa[R] - psa[L-1]<<endl;
        }else{
            int L,R;
            cin>>L>>R;
            cout<<psb[R] - psb[L-1]<<endl;
        }



    }

    
    return 0;
}