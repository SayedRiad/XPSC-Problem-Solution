
//https://codeforces.com/contest/1851/problem/D

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
    vll v(n);
    for(int i=0;i<n-1;i++)    cin >> v[i];
    ll x = (1ll*n*1ll*(n+1))/2;
    
    if(v[n-2] > x){
        cout << "NO\n";
        return;
    }
    else if(v[n-2] < x){
        v[n-1] = x;
        map<int,int> mp;
        mp[v[0]]++;
        for(int i=n-1;i>=1;i--){
            mp[v[i]-v[i-1]]++;
        }
        for(int i=1;i<=n;i++){
            if(mp[i]==0){
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
    }
    else{
        map<int,int> mp;
        for(int i=n-2;i>=1;i--){
            mp[v[i]-v[i-1]]++;
        }
        mp[v[0]]++;
        vi v1;
        for(int i=1;i<=n;i++){
            if(mp[i]==0)
                v1.pb(i);
        }
        if(v1.size()!=2){
            cout << "NO\n";
            return;
        }
        ll m = v1[0]+v1[1];
        if(mp[m]!=0)
            cout << "YES\n";
        else
            cout << "NO\n";
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