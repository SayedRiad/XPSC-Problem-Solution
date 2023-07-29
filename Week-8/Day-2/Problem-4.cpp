
//https://codeforces.com/contest/1849/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool cmp(const pair<int,int> &p1, const pair<int,int> &p2){
    if(p1.first==p2.first)
        return p1.second<p2.second;
    return p1.first>p2.first;
}

void solve(){
    ll n,k;                  cin >> n >> k;
    vll v(n),a,b;
    vector<pair<int,int>> p;
    for(int i=0;i<n;i++){
        cin >> v[i];
        v[i] %= k;
        if(v[i]==0) 
            cout << i+1 <<' ';
        else
            p.pb({v[i], i+1});
    }
    sort(p.begin(),p.end(), cmp);
    for(auto u:p){
        cout << u.second<<' ';
    }
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