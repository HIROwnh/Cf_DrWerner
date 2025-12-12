#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr [101];   
    int i,n;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}