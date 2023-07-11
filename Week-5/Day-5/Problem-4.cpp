
//https://codeforces.com/contest/1798/problem/B

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
    int m;                 cin >> m;
    bool ok=true;
    map<int,int> mp;

    for(int i=1;i<=m;i++){
        int n;             cin >> n;
        for(int j=1;j<=n;j++){
            int x;         cin >> x;
            mp[x] = i;
        }
    }

    vi ans(m+1,-1);

    for(auto u:mp){
        if(ans[u.second]==-1)
            ans[u.second] = u.first;
    }

    for(int i=1;i<=m;i++){
        if(ans[i]==-1){
            ok=false;break;
        }
    }

    if(ok==false){
        cout << -1 << endl;
        return;
    }

    for(int i=1;i<=m;i++)
        cout << ans[i]<<" ";

    cout << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}

