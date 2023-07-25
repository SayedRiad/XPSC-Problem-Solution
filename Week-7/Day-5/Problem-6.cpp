
//https://www.codechef.com/problems/PERMSUBSEQ

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
    vll v(n);
    map<ll,int> mp;
    for(int i=0;i<n;i++){
        cin >> v[i];
        mp[v[i]]++;
    }
    ll ans=0,prev=1;
    for(int i=1;i<=n;i++){
        ll temp = (prev*mp[i])%mod;
        ans = (ans + temp)%mod;
        prev = temp;
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