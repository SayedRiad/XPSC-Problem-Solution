
//https://codeforces.com/contest/1676/problem/H1

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
    multiset<int> s;
    int ans=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        int cnt=0;
        for(auto u:s){
            if(u>=v[i] and u<=n)
                cnt++;
        }
        ans += cnt;
        s.insert(v[i]);
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