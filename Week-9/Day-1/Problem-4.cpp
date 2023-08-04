
//https://codeforces.com/problemset/problem/295/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int n=1e5+5;
int a[n];
ll ans[n];
ll ans2[n];

void solve(){
    ll n,m,k;                  cin >> n >> m >> k;
    vector<ll> add(m+1);
    vector<pair<int,int>> v(m+1);

    for(int i=1;i<=n;i++)        cin >> a[i];

    for(int i=1;i<=m;i++){
        ll l,r,d;                cin >> l >> r >> d;
        v[i] = {l, r};
        add[i] = d;
    }

    while(k--){
        ll x,y;                 cin >> x >> y;
        ans[x]++;
        ans[y+1]--;
    }

    for(int i=1;i<=m;i++) {
        ans[i] += ans[i-1];
    }

    for(int i=1;i<=m;i++){
        add[i] *= ans[i];
    }

    for(int i=1;i<=m;i++){
        int l = v[i].first;
        int r = v[i].second;
        ans2[l] += add[i];
        ans2[r+1] -= add[i];
    }

    for(int i=1;i<=n;i++){
        ans2[i] += ans2[i-1];
    }
    for(int i=1;i<=n;i++){
        cout << ans2[i] + a[i] << ' ';
    }
}

int main(){
    opt();
    int t=1;                  //cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}