
//https://codeforces.com/problemset/problem/735/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool is_prime(ll n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

void solve(){
    ll n;                  cin >> n;
    
    if(is_prime(n))
        cout << 1 << endl;

    else if(n&1){
        if(is_prime(n-2))
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }

    else
        cout << 2 << endl;
}

int main(){
    opt();
    int t=1;                  //cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}