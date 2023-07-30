
//https://codeforces.com/problemset/problem/1853/A

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
    vll v(n);
    for(int i=0;i<n;i++)    cin >> v[i];
    
    for(int i=1;i<n;i++){
        if(v[i-1]>v[i]){
            cout << 0 << endl;
            return;
        }
    }
    ll dif=INT_MAX;
    for(int i=1;i<n;i++){
        dif = min(dif, v[i]-v[i-1]);
    }
    cout << dif/2 + 1 << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}