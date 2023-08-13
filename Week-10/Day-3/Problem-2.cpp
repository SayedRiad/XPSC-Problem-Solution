
//https://codeforces.com/contest/1582/problem/B

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
    vi a(n);
    ll one=0, zero=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]==1) one++;
        if(a[i]==0) zero++;
    }

    if(one==0)
        cout << 0 << endl;
    else if(zero==0)
        cout << one << endl;
    else 
        cout << (1ll<<1ll*(zero))*1ll*one << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}