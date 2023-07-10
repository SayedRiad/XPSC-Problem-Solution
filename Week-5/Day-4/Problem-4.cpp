
//https://codeforces.com/contest/1343/problem/B

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
    ll n;                  cin >> n;
    if((n/2)%2==0){
        cout << "YES\n";
        ll x = (n/2)*((n/2)+1);
        ll k = n/2, l = n/2, a=0, b=1,f=0;
        while(k--){
            a += 2;
            cout << a <<' ';
        }
        --l;
        while(l--){
            f+=b;
            cout << b <<' ';
            b += 2;
        }
        cout << x-f<<' ';
    }
    else cout <<"NO";
    cout << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}

