
//https://codeforces.com/contest/1800/problem/C1

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vi vector<ll>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    ll n,ans = 0;                 cin >> n;
    priority_queue<ll> pq;
    for(int i=0;i<n;i++){
        ll x;                     cin >> x;
        if(x==0){
            if(pq.empty()) continue;
            ans += pq.top();
            pq.pop();
        }
        else
            pq.push(x);
    }
    cout << ans << endl;
    while(!pq.empty()){
        pq.pop();
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

