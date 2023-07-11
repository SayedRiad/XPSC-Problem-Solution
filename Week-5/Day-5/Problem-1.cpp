
//https://codeforces.com/contest/1742/problem/D

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

    vi cop[1005];
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
            if(__gcd(i,j)==1){
                cop[i].pb(j);
            }
        }
    }

    int n;
    cin >> n;
    vi v(n+1), mxindx(1005,-1);
    for(int i=1;i<=n;i++){
        cin >> v[i];
        mxindx[v[i]] = i;
    }
 
    int ans=0;
 
    for(int i=1;i<=1000;i++){
        if(mxindx[i] == -1) continue;
        if(i==1){
            ans = max(ans,2*mxindx[i]);
            continue;
        }
        for(auto u:cop[i]){
            if(mxindx[u]!=-1){
                ans = max(ans,mxindx[i]+mxindx[u]);
            }
        }
    }

    if(!ans) cout << -1 << endl;
    else cout << ans << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}

