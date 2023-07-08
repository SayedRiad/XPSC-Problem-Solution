
//https://codeforces.com/contest/1642/problem/C

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
    int n,x;                cin >> n >> x;
    map<ll, map<int, int>> mp;
    map<ll,int> cnt;
    vector<ll> v(n+1);
    for(int i=1;i<=n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(int i=1;i<=n;i++){
        cnt[v[i]]++;
        mp[v[i]][cnt[v[i]]] = i;
    }
    
    for(int i=1;i<=n;i++){
        if(v[i]!=-1){
            ll y = v[i]*x;
            
            if(mp[y][cnt[y]]!=0){
                v[mp[y][cnt[y]]] = -1;
                v[i]=-1;
                cnt[y]--;
            }
        }
    }
    
    int ans=0;
    for(int i=1;i<=n;i++){
        if(v[i]!=-1) ans++;
    }
    cout << ans <<endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}

