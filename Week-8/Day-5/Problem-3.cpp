
//https://codeforces.com/contest/1807/problem/D

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
    int n,q;                cin >> n >> q;
    vll v(n+1),pref(n+1);
    for(int i=1;i<=n;i++){
        cin >> v[i];
    }
    pref[1] = v[1];
    for(int i=2;i<=n;i++){
        pref[i] = v[i] + pref[i-1];
    }
    while(q--){
        int l,r;            cin >> l >> r;
        ll k;               cin >> k;
        ll x = pref[r] - pref[l-1];
        ll y = (pref[n] - x) + (r-l+1)*k;
        if(y&1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}