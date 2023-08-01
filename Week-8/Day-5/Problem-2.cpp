
//https://codeforces.com/contest/1855/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int limit = 1e4;

void solve(){
    ll n;                  cin >> n;
    int cnt=0,ans=0;
    for(int i=1;i<=limit;i++){
        if(n%i==0) cnt++;
        else{
            ans = max(ans, cnt);
            cnt = 0;
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