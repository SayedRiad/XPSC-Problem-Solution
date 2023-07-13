
//https://codeforces.com/contest/1176/problem/B

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
    map<int,int> mp;
    vll v(n);
    int ans=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        int r = v[i]%3;
        if(r==0) ans++;
        else mp[r]++;
    }
    int x = min(mp[1],mp[2]);
    mp[1] -= x;
    mp[2] -= x;
    ans += x + mp[1]/3 + mp[2]/3;
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