
//https://codeforces.com/problemset/problem/1800/C2

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
    priority_queue<ll> pq;
    ll sum=0;
    for(int i=0;i<n;i++){
        ll x;               cin >> x;
        if(x==0 and !pq.empty()){
            sum += pq.top();
            pq.pop();
        }
        else if(x > 0)
            pq.push(x);
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