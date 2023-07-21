
//https://codeforces.com/problemset/problem/1805/A

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
    vi v(n);
    for(int i=0;i<n;i++)    cin >> v[i];
    int x=0;
    for(int i=0;i<n;i++){
        x = x ^ v[i];
    }
    for(int i=0;i<n;i++){
        v[i] = v[i] ^ x;
    }
    int y=0;
    for(int i=0;i<n;i++){
        y = y ^ v[i];
    }
    if(!y)
        cout << x << endl;
    else 
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