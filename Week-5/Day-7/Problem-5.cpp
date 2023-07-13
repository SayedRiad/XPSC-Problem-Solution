
//https://codeforces.com/contest/1454/problem/B

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
    map<int,int> mp,cnt;
    for(int i=0;i<n;i++){
        int x;              cin >> x;
        cnt[x]++;
        mp[x] = i+1;
    }
    for(auto u:cnt){
        if(u.second==1){
            cout << mp[u.first] << endl;
            return;
        }
    }
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