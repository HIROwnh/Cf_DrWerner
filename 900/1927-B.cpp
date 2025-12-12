#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n;
        cin>>n;
        vector <int> a (n);
        for (int i = 0; i < n; i++)cin>>a[i];
        vector <int> count (26);
        string s = "";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                if(count[j]==a[i]){
                    count[j]++;
                    s.push_back(char('a'+j));
                    break;
                }
            }
            
        }
        
        cout<<s<<endl;  

    }
       

    return 0;
}