
//https://codeforces.com/problemset/problem/1791/G1

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    ll n,c,y=0,ans=0;              cin >> n >> c;
    vll v;
    for(ll i=0;i<n;i++){
        ll x;                      cin >> x;
        v.pb(i+x+1);
    }
    sort(v.begin(),v.end());
    for(auto u:v){
        y+=u;
        if(y>c) break;
        ans++;
    }
    cout << ans<<endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}