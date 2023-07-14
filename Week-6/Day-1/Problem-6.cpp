
//https://www.codechef.com/problems/MAXIMSCORE

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
    vi v(n),b;
    for(int i=0;i<n;i++)    cin >> v[i];
    int l=-1,r=-1;
    for(int i=0;i<n;i++){
        if(i-1>=0)
            l = abs(v[i]-v[i-1]);
        if(i+1<n)
            r = abs(v[i]-v[i+1]);
        b.pb(max(l, r));
    }
    
    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        ans = min(ans, b[i]);
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