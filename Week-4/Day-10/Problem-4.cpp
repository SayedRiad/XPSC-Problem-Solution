
//https://codeforces.com/contest/1675/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;                  cin >> n;
    vll v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    ll ans=0;
    for(int i=n-2;i>=0;i--){
        if(v[i]>=v[i+1]){
            while(v[i]>=v[i+1]){
                ans++;
                v[i] /= 2;
                if(v[i]==0) break;
            }
        }
    }

    bool ok=true;
    for(int i=0;i<n-1;i++){
        if(v[i]>=v[i+1])
            ok=false;
    }
    if(ok)
        cout << ans << endl;
    else
        cout << -1 << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}

