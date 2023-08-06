
//https://codeforces.com/problemset/problem/1624/A

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
    ll mxi=INT_MIN, mni=INT_MAX;
    for(int i=0;i<n;i++){
        ll x;               cin >> x;
        if(x>mxi) mxi=x;
        if(x<mni) mni=x;
    }
    cout << mxi-mni << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}