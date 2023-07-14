
//https://www.codechef.com/problems/DISTANCECOLO

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int mod = 1e9+7;

void solve(){
    int n,k;                cin >> n >> k;
    
    ll ans = 1;
    for(int i=1;i<=n;i++){
        ans = (ans*k)%mod;
        if(k>1) k--;
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