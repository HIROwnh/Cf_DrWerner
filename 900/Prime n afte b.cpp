#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int b;
    string n;
    cin>>n;
    b =0;
    int x = n.length();
    for (int i = 0; i < x; i++)
    {
        b+=n[i]-48;
    }
    
    
    ll count =0;
    for (int j = 0; count < b; j++)
    {
        if(isPrime(j)) count++;
        if(count==b) cout<<j<<endl;
    }
    

    return 0;
}