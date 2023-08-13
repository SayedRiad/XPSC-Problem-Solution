
//https://codeforces.com/contest/1602/problem/B

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
    for(int i=0;i<n;i++)    cin >> a[i];

    vector<vi> v(n+1);
    
    for(int i=0;i<n;i++)
        v[0].pb(a[i]);

    for(int i=1;i<=n;i++){
        map<int,int> mp;
        for(int j=0;j<n;j++){
            mp[a[j]]++;
        }

        for(int k=0;k<n;k++){
            a[k] = mp[a[k]];
            v[i].pb(a[k]);
        }
    }

    int q;  cin >> q;

    while(q--){
        int x,k;    cin >> x >> k;
        
        if(k<=n)
            cout << v[k][--x];
        else
            cout << v[n][--x];
        cout << endl;
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