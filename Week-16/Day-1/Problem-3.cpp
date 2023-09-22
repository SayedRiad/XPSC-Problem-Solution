
//https://cses.fi/problemset/task/1090

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
    int n,x;                   cin >> n >> x;
    ll sum=0;
    
    vi v(n);
    for(int i=0;i<n;i++)       cin >> v[i];

    sort(v.begin(),v.end());
    
    int j = 0, ans = 0;
    for(int i=n-1;i>=j;i--){
        if(v[j] + v[i] <= x)
            j++;
        ans++;
    }
    
    cout << ans << endl;
}

int main(){
    opt();
    int t=1;                  //cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}