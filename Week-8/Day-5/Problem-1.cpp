
//https://codeforces.com/problemset/problem/1855/A

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
    vi v(n+1);
    for(int i=1;i<=n;i++)    cin >> v[i];
    int ans=0;
    for(int i=1;i<=n;i++) {
        if(v[i]==i){
            ans++;
        }
    }
    cout << (ans+2-1)/2 << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}