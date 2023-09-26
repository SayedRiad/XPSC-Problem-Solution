
//https://codeforces.com/contest/1882/problem/A

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
    int n;
    cin >> n;
    vi a(n), b(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    ll x;
    if(a[0]==1) x = 2;
    else x = 1;

    for(int i=1;i<n;i++){
        x++;
        if(a[i]==x) x++;
    }
    
    cout << x << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}