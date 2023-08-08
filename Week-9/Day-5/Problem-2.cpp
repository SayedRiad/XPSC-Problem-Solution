
//https://codeforces.com/contest/1784/problem/A

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
    ll n;              cin >> n;
    vector<ll> v(n);
    map<ll,int> mp;
    for(int i=0;i<n;i++) cin >> v[i];

    sort(v.begin(),v.end());

    ll ans=0;
    int p=0;
    for(int i=0;i<n;i++){
        if(i>0) p=v[i-1];
        if(v[i]>p+1){
            ans+=v[i]-(p+1);
            v[i]=p+1;
        }
    }

    cout << ans << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}