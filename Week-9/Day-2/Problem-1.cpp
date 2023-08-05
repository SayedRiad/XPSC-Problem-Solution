
//https://codeforces.com/problemset/problem/1770/A

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
    int n,m;                  cin >> n >> m;
    priority_queue<ll, vll, greater<ll>> pq;
    for(int i=1;i<=n;i++){
        ll val;               cin >> val;
        pq.push(val);
    }
    
    for(int i=1;i<=m;i++){
        ll val;               cin >> val;
        pq.pop();
        pq.push(val);
    }
    ll sum=0;
    while(!pq.empty()){
        sum += pq.top();
        pq.pop();
    }
    cout << sum << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}