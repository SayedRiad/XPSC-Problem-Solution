
//https://codeforces.com/problemset/problem/467/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int count(int val){
    int res=0;
    while(val > 0){
        res++;
        val = val & (val - 1);
    }
    return res;
}

void solve(){
    int n,m,k;                 cin >> n >> m >> k;
    vi v(m);
    int ans=0, x;
    for(int i=0;i<m;i++)       cin >> v[i];
    cin >> x;
    for(int i=0;i<m;i++){
        if(count(x ^ v[i]) <= k) ans++;
    }
    cout << ans << endl;
}

int main(){
    opt();
    int t=1;                  //cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}