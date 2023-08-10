
//https://codeforces.com/problemset/problem/1006/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


ll equal_sum(vector<ll> &a,ll x){
    int l = 1, r = a.size()-1;
   
    while(l<=r){
        int mid = l + (r-l)/2;
        if(a[mid]==x){
            return mid;
        }
        else if(a[mid]>x){
            l = mid+1;
        }
        else r= mid-1;
    }

    return -1;
}

void solve(){
    int n;                  cin >> n;
    vll v(n),pref(n),suf(n);

    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    pref[0] = v[0];
    for(int i=1;i<n;i++){
        pref[i] = v[i] + pref[i-1];
    }

    suf[n-1] = v[n-1];
    for(int i=n-2;i>=0;i--){
        suf[i] = v[i] + suf[i+1];
    }
    
    ll ans=0;
    for(int i=0;i<n-1;i++){
        int indx = equal_sum(suf, pref[i]);
        if(indx!=-1 and indx>i and pref[i]>ans){
            ans = pref[i];
        }
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