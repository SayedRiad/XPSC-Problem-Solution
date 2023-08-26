
//https://codeforces.com/contest/1862/problem/D

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
    ll n;                  cin >> n;
    
    ll l=2, r=1e10;
    ll m;
    while(l<=r){
        ll mid = l+(r-l)/2;
        ll x = (mid*(mid-1))/2;
        if(x<=n){
            m = mid;
            l = mid+1;  
        }
        else r = mid-1;
    }

    ll y = (m*(m-1))/2;

    cout << m+(n-y) << endl;

}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}