
//https://codeforces.com/contest/1592/problem/A

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
    int n,h;                cin >> n >> h;
    vll v(n);
 
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    
    sort(v.begin(),v.end());
    ll a = v[n-1], b = v[n-2];

    if(h%(a+b) == 0){
        cout << 2*(h/(a+b)) << endl;
    }
    else if(h%(a+b) <= a){
        cout << 2*(h/(a+b))+1 << endl;
    }
    else{
        cout << 2*(h/(a+b))+2 << endl;
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