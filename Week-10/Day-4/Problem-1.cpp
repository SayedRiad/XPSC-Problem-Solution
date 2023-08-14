
//https://codeforces.com/contest/1604/problem/A

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
    vector<ll> v(n);
 
    for(int i=0;i<n;i++)
        cin >> v[i];
    
    ll ans=0;
    for(int i=0,j=1;i<n;i++,j++){
        
        if(v[i]>j){
            ans += v[i]-j;
            j += v[i]-j;
        }
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