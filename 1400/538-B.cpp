#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
int d[10];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int cnt = 1;
    while (n>0)
    {
        d[cnt]=n%10;
        n = n/10;
        cnt++;
    }
    cnt--;
    for (int i = 1; i <= (cnt+1)/2; i++)
    {
        swap(d[i], d[cnt-i+1]);
    }
    int maxi =0;
    for (int i = 1; i <= cnt; i++)
    {
        maxi =  max(maxi, d[i]);
    }
    cout<<maxi<<endl;
    for (int i = 1; i <= maxi; i++)
    {   bool is = false;
        for (int j = 1; j <= cnt; j++)
        {
            if(d[j]>0){
                cout<<1;
                d[j]--;
                is = true;
            }else{
                if(is) cout<<0;
            }
        }
        cout<<" ";
        
    }
    
    return 0;
}