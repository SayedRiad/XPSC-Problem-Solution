
//https://codeforces.com/contest/1873/problem/E

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
    ll n,x;
    cin >> n >> x;
    
    vll v(n);

    for(int i=0;i<n;i++)
        cin >> v[i];
    
    ll l=1,r=1e10;
    
    while(l<r-1){
        ll add = 0;
        ll mid = l + (r-l)/2;
       
        for(int i=0;i<n;i++){
            if(v[i]<mid){
                add += (mid-v[i]);
            }
        }

        if(add > x)
            r = mid;
        else
            l = mid;
    }
    
    cout << l << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}