
//https://codeforces.com/contest/1833/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;                  cin >> n;
    ll k;                   cin >> k;

    vl a(n),b(n),ans(n);
    vector<pair<ll,ll>> p;

    for(int i=0;i<n;i++) {
        cin >> a[i];
        p.pb({a[i], i});
    }

    for(int i=0;i<n;i++) {
        cin >> b[i];
    }

    sort(p.begin(),p.end());  
    sort(b.begin(),b.end());
    
    int i=0;
    for(auto u:p) {
        ans[u.second] = b[i];
        i++;
    }
    for(auto u:ans)
        cout << u << " ";
    cout << endl;
}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}

