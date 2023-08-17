
//https://codeforces.com/problemset/problem/1814/A

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
    
    for(int y=0;y<=1;y++){
        ll x = n-k*y;
        if(x%2==0){
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}