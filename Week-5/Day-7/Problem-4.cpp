
//https://codeforces.com/contest/1838/problem/B

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
    int n;                  cin>>n;
    vi v(n);
    map<int,int> mp;
 
    for(int i=0;i<n;i++) {
        cin >> v[i];
        mp[v[i]] = i+1;
    }
    
    if((mp[n]<mp[1] and mp[n]<mp[2]) and mp[1]<mp[2])
        cout << mp[1] << " " << mp[n] << endl;
 
    else if((mp[n]<mp[1] and mp[n]<mp[2]) and mp[2]<mp[1])
        cout << mp[2] << " " << mp[n] << endl;
 
    else if((mp[n]>mp[1] and mp[n]>mp[2]) and mp[1]>mp[2])
        cout << mp[1] << " " << mp[n] << endl;
 
    else if((mp[n]>mp[1] and mp[n]>mp[2]) and mp[2]>mp[1])
        cout << mp[2] << " " << mp[n] << endl;
 
    else
        cout << mp[1] << " " << mp[2] << endl;
    
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}