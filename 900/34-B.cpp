#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,c;
    cin>>n>>c;
    vector <int> data(n);   
    for(int i =0;i<n;i++)cin>>data[i];
    sort(data.begin(), data.end());
    int sum = 0;
    for (int i = 0; i < c; i++)
    {   
        if(data[i]<0){
            sum+=abs(data[i]);
        }/*else if(data[i]>0){
            sum -= data[i];
        }*/
        
    }
    cout<<sum;
    return 0;
}