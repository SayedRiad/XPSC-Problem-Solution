
//https://codeforces.com/contest/1581/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int mod = 1e9+7;

void solve(){
    int n;                  cin >> n;
    ll ans = 1;
    n *= 2;
    for(int i=3;i<=n;i++){
        ans *= i;
        ans %= mod;
    }
    cout << ans << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}