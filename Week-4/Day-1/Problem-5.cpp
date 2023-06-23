
//https://www.codechef.com/problems/MOONSOON

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vl vector<ll>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,m,h;              cin>>n>>m>>h;
    vl a(n), b(m);
    for(int i=0;i<n;i++)    cin >> a[i];
    for(int i=0;i<m;i++)    cin >> b[i]; 
    sort(a.rbegin(),a.rend());   
    sort(b.rbegin(),b.rend()); 
    int x = min(n, m);
    ll ans=0;
    for(int i=0;i<x;i++){
        ans += min(b[i]*h, a[i]);
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

