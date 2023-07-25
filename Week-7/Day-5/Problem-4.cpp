
//https://www.codechef.com/problems/EQUALELE

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
    vi v(n);
    map<int,int> mp;
    int mxi=0,cnt=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        mp[v[i]]++;
        if(mp[v[i]] > cnt){
            mxi = v[i];
            cnt = mp[v[i]];
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(v[i] != mxi) ans++;
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