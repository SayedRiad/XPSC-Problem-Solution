
//https://codeforces.com/contest/1612/problem/B

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
    int n,a,b;              cin >> n >> a >> b;
        
    map<int,int> mp;
    vi v;
    mp[a] = 1;
    mp[b] = 1;
    v.pb(a);
    for(int i=2,j=n;i<=n/2 and j>a;j--){
        if(mp[j] == 0){
            v.pb(j);
            mp[j] = 1;
            i++;
        }
    }
    for(int i=2,j=1;i<=n/2 and j<b;j++){
        if(mp[j] == 0){
            v.pb(j);
            mp[j] = 1;
            i++;
        }
    }
    v.pb(b);
    if(v.size()==n){
        for(auto u:v)
            cout << u << ' ';
    }
    else
        cout << -1;

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