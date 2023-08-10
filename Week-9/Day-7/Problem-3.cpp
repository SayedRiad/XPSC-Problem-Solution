
//https://codeforces.com/contest/1857/problem/C

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
    int sz = (n*(n-1))/2;
    vi v(sz);
    for(int i=0;i<sz;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());

    vi a;
    for(int i=0,j=n-1;i<sz;j--){
        a.pb(v[i]);
        i += j;
    }

    a.pb(v.back());

    for(auto u:a)
        cout << u << ' ';
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