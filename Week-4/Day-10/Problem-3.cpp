
//https://codeforces.com/contest/1675/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    ll a,b,c,x,y;                  cin >> a>>b>>c>>x>>y;
    ll nx=0,ny=0;
    if(a<x) nx = x-a;
    if(b<y) ny = y-b;
    if(c>=nx) {
        a += nx;
        c -= nx;
    }
    if(c>=ny){
        b += ny;
        c -= ny;
    }
    if(a>=x and b>=y)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}

