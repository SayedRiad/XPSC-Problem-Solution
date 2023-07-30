
//https://codeforces.com/contest/1851/problem/A

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
    int n,m,k,h;           cin >> n>>m>>k>>h;
    int ans=0;
    for(int i=0;i<n;i++){
        int x;             cin >> x;
        int dif = abs(h-x);
        if(dif and dif%k==0 and dif/k<m) 
            ans++;          
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