
//https://codeforces.com/problemset/problem/1692/E

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
    int n,s;                  cin >> n >> s;
    vll a(n), pref(n);

    for(int i=0;i<n;i++){
        cin >> a[i];
        pref[i] = a[i];

        if(i)
            pref[i] += pref[i-1];
    }
    
    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        int l=i, r=n-1, pos=-1;

        while(l<=r){
            int mid = l + (r-l)/2;

            if((pref[mid]-(i?pref[i-1]:0)) <= s){
                pos = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }

        if(pos == -1 or (pref[pos]-(i?pref[i-1]:0))!=s) continue;

        ans = min(ans, n-(pos-i+1));
    }

    if(ans==INT_MAX)
        cout << -1 << endl;
    else
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