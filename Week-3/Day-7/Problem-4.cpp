
//https://codeforces.com/contest/1744/problem/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,res=0;           cin >> n;
    vector<ll> v;
 
    for(int i=1;i<=n;i++){
        ll x;              cin >> x;
        while(x%2==0){
            res++;
            x = x>>1;
        }
        int cnt=0;
        int temp=i;
        while(temp%2==0){
            cnt++;
            temp = temp>>1;
        }
        v.pb(cnt);
    }
    if(res>=n){
        cout << 0 << endl;
    }
    else{
        sort(v.rbegin(),v.rend());
        int ans=0;
        for(int i=0;i<v.size();i++){
            res += v[i];
            ans++;
            if(res>=n){
                cout << ans << endl;
                break;
            }
        }
        if(res<n) cout << -1 << endl;
    }
}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}

