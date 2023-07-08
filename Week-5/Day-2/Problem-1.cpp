
//https://codeforces.com/contest/1629/problem/A

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
    int n,k;          cin >> n >> k;
    vi a(n),b(n);
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    for(int i=0;i<n;i++){
        v.pb({a[i],b[i]});
    }
    sort(v.begin(),v.end());
    for(auto u:v){
        if(u.first<=k) k += u.second;
    }
    cout << k << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}

