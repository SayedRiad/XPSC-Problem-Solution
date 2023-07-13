
//https://codeforces.com/contest/1433/problem/C

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
    int n;                   cin >> n;
    vll v(n);   
    ll mxi=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        mxi = max(mxi, v[i]);
    }   
        
    for(int i=0;i<n;i++){
        if(v[i]==mxi){
            if(i==0 and v[i]>v[i+1]){
                cout << i+1 << endl;
                return;
            }
            else if(i==n-1 and v[i]>v[i-1]){
                cout << i+1 << endl;
                return;
            }
            else if(v[i]>v[i-1] or v[i]>v[i+1]){
                cout << i+1 << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}