
//https://codeforces.com/problemset/problem/276/C

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
    int n,q;                  cin >> n >> q;
    vi v(n+1),v3(n+1);
    for(int i=0;i<n;i++)      cin >> v[i];
    sort(v.begin(),v.end());
    vll a(n+5);
    vector<pair<int,int>> range;
    for(int i=1;i<=q;i++){
        int l,r;              cin >> l >> r;
        range.pb({l, r});
        a[l]++;
        a[r+1]--;
    }
    vector<pair<ll,int>> v2;
    for(int i=1;i<=n;i++) {
        a[i] += a[i-1];
        v2.pb({a[i], i});
    }

    sort(v2.begin(),v2.end(),[&](pair<ll,int> p1, pair<ll,int> p2){
        if(p1.first==p2.first)
            return p1.second < p2.second;
        return p1.first > p2.first;
    });
    
    for(int i=0,j=n;i<v2.size();i++,j--){
        v3[v2[i].second] = v[j];
    }
    vll pref(n+1);
    pref[1] = v3[1];
    for(int i=2;i<=n;i++){
        pref[i] = v3[i] + pref[i-1];
    }
    ll sum=0;
    for(auto u:range){
        int l = u.first;
        int r = u.second;
        sum += pref[r] - pref[l-1];
    }
    cout << sum << endl;
}

int main(){
    opt();
    int t=1;                  //cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}