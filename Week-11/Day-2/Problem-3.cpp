
//https://codeforces.com/contest/1859/problem/B

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
    int n;                  cin >> n;
    
    vector<priority_queue<ll, vector<ll>, greater<ll>>> v(n);
 
    for(int i=0;i<n;i++){
        int m;              cin >> m;
        for(int j=0;j<m;j++){
            ll x;
            cin >> x;
            v[i].push(x);
        }
    }

    ll sum=0;
    vll a,b;
    for(int i=0;i<n;i++){
        a.pb(v[i].top());
        v[i].pop();
        sum+=v[i].top();
        b.pb(v[i].top());
    }
 
    ll mn = INT_MAX, mi = INT_MAX;
    for(auto u:a)
        mn = min(mn, u);
    for(auto u:b)
        mi = min(mi, u);
    
    cout << sum+mn-mi << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}