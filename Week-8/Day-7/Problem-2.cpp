
//https://codeforces.com/contest/1791/problem/E

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
    ll sum=0,cnt=0,mn=INT_MAX;
    for(int i=0;i<n;i++) {
        cin >> v[i];
        sum += abs(v[i]);
        mn = min(mn, abs(v[i]));
        if(v[i]<0) cnt++;
    }
  
    if(cnt%2){
        cout << sum - (2*mn) << endl;
        return;
    }  
    cout << sum<< endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}