
//https://codeforces.com/contest/1475/problem/A

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
    ll n;                       cin >> n;
    if(n&1) 
        cout <<"YES\n";
    else{
        double x = log2(n);
        ll y = log2(n);
        if(x-y!=0) 
            cout <<"YES\n";
        else 
            cout <<"NO\n";
    }
}

int main(){
    opt();
    int t;                     cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}

