
//https://codeforces.com/contest/1742/problem/E

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
    int n,q;
    cin >> n >> q;
    vll a(n+1),pref(n+1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
        pref[i] = a[i] + pref[i-1];
    }
    vll ans(q);
    vector<pair<ll,int>> k(q);
    for(int i=0;i<q;i++){
        cin >> k[i].first;
        k[i].second = i;
    }
    sort(k.begin(),k.end());
    int p=0;
    for(int i=0;i<q;i++){
        while(1){
            if(p==n or a[p+1]>k[i].first) break;
            p++; 
        }
        ans[k[i].second] = pref[p];
    }
    for(int i=0;i<q;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main(){
    opt();
    int t=1;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}

