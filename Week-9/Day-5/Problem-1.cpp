
//https://codeforces.com/problemset/problem/1790/D

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
    vll a(n);
    map<ll,int> mp;
    for(int i=0;i<n;i++){    
        cin >> a[i];
        mp[a[i]]++;
    }

    ll x=0, y=0, ans=0;
    for(auto u:mp){
        if(u.first-x==1){
            if(u.second>y){
                ans += u.second-y;
            } 
        }
        else{
            ans += u.second;
        }
        y = u.second;
        x = u.first;
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