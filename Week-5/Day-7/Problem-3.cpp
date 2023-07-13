
//https://codeforces.com/contest/1154/problem/A

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
    vll v(4);                  
    for(int i=0;i<4;i++)     cin >> v[i];
    sort(v.begin(),v.end());
    ll x = v.back()-v[0];
    cout << x <<' ';
    cout << v[1]-x <<' '<< v[2]-x <<endl;
}

int main(){
    opt();
    int t=1;                  //cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}