#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int cnt =0;
    int ans[100];
    for (int i = max(n -90, 0); i <= n; i++)
    {
        int sum =i;
        int tmp =i;
        while (tmp >0)
        {
           sum+= tmp %10;
           tmp = tmp/10;
        }
        if(sum==n){cnt++;
            ans[cnt]=i;}
    }
    cout<<cnt<<endl;
    for (int i = 1; i <= cnt; i++)
    {
        cout<< ans[i]<<endl;
    }
    

    return 0;
}