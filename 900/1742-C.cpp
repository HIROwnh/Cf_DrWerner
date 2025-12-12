#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;
    while (tc--)
    {   bool isprinted = true;
        char grid [8][8]; 
        vector<int> r;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin>>grid[i][j];
                if(grid[i][j]=='R'){
                    r.push_back(i);
                }
            }
            
        }
        for (int i : r)
        {
            bool flag = true;
            for (int j = 0; j <8; j++)
            {
                if(grid[i][j] !='R'){flag = false;break;}

            }
            if(flag){
                cout<<'R'<<endl;
                isprinted = false;
                break;

            }
        }
        if(isprinted){cout<<'B'<<endl;}

    }
       

    return 0;
}