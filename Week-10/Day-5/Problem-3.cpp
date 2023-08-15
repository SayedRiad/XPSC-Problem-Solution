
//https://codeforces.com/contest/1614/problem/A

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
    int n,l,r,k;                  cin >> n>>l>>r>>k;
    vi a(n);
    for(int i=0;i<n;i++)    cin >> a[i];
    sort(a.begin(),a.end());
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]>=l and a[i]<=r and a[i]<=k){
            cnt++;
            k -= a[i];
        }
    }
    cout << cnt << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}