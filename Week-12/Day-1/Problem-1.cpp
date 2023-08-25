
//https://codeforces.com/problemset/problem/762/A

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
    ll n,k;                  cin >> n >> k;
    set<ll> s;
    
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            s.insert(i);
            s.insert(n/i);
        }
    }
    
    vll a;
    a.assign(s.begin(),s.end());

    if(k>a.size())
        cout << -1 << endl;
    else
        cout << a[k-1] << endl;
}

int main(){
    opt();
    int t=1;                  //cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}