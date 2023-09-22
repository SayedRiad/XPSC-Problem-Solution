
//https://cses.fi/problemset/task/1074

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
    int n;                      cin >> n;
    vi v(n);

    for (int i=0;i<n;i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());
    ll x = v[n/2];

    ll cost = 0;
    for (auto u : v){
        cost += abs(x - u);
    }

    cout << cost << endl; 
}

int main(){
    opt();
    int t=1;                  //cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}