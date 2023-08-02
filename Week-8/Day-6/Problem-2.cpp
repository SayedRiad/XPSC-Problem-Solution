
//https://codeforces.com/contest/1807/problem/G2

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
    ll n;              cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    if(v[0]==1){
        ll x=v[0];
        for(int i=1;i<n;i++){
            if(v[i]>x){
                cout <<"NO\n";
                return;
            }
            x+=v[i];
        }
        cout <<"YES\n"; 
    }
    else
        cout <<"NO\n";
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}