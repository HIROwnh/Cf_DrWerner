#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;cin>>tc;
    while (tc--)
    {
        int n;cin>>n;
        int data [n];
        for (int i = 0; i < n; i++)
        {
            cin>>data[i];
        }
        if(data[0]==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    

    return 0;
}