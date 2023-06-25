
//https://codeforces.com/contest/1702/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,k;                cin >> n >> k;
    map<ll,map<int,int>> mp;
    map<ll,int> cnt;

    for(int i=1;i<=n;i++){
        ll u;               cin >> u;
        cnt[u]++;
        mp[u][cnt[u]] = i;
    }

    while(k--){
        ll a,b;             cin >> a >> b;
        if(cnt[a]==0 or cnt[b]==0)
            cout << "NO\n";
        else{
            if(mp[a][1]<mp[b][cnt[b]])
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    } 
}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}

